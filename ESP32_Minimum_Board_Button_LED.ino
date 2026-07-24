/*
  ESP32-WROOM-32E Minimum Board
  User button -> User LED

  Schematic mapping:
    User switch (S2): GPIO34, external 10 kΩ pull-up to 3.3 V
                      pressed = LOW
    User LED (LED2): GPIO18, connected to 3.3 V through a resistor
                     GPIO18 LOW  = LED ON
                     GPIO18 HIGH = LED OFF

  Board target:
    ESP32 Dev Module / ESP32-WROOM-32E
*/

#include <Arduino.h>

constexpr gpio_num_t USER_BUTTON_PIN = GPIO_NUM_34;
constexpr gpio_num_t USER_LED_PIN    = GPIO_NUM_18;

constexpr uint32_t DEBOUNCE_MS = 30;

bool lastRawButtonState = HIGH;
bool stableButtonState  = HIGH;
uint32_t lastChangeTime = 0;

void setUserLed(bool on)
{
  // The LED is active-low because the GPIO sinks current.
  digitalWrite(USER_LED_PIN, on ? LOW : HIGH);
}

void setup()
{
  Serial.begin(115200);

  // GPIO34 has no internal pull-up/pull-down on the ESP32.
  // The schematic already provides an external 10 kΩ pull-up.
  pinMode(USER_BUTTON_PIN, INPUT);

  pinMode(USER_LED_PIN, OUTPUT);
  setUserLed(false);

  Serial.println();
  Serial.println("ESP32 board test started.");
  Serial.println("Press the USER switch to turn on the USER LED.");
}

void loop()
{
  const bool rawButtonState = digitalRead(USER_BUTTON_PIN);

  if (rawButtonState != lastRawButtonState)
  {
    lastRawButtonState = rawButtonState;
    lastChangeTime = millis();
  }

  if ((millis() - lastChangeTime) >= DEBOUNCE_MS &&
      stableButtonState != rawButtonState)
  {
    stableButtonState = rawButtonState;

    const bool buttonPressed = (stableButtonState == LOW);
    setUserLed(buttonPressed);

    Serial.println(buttonPressed ? "Button pressed: LED ON"
                                 : "Button released: LED OFF");
  }
}
