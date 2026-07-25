<h1 align="center">ESP32 Community Hardware Project</h1>

<p align="center">
A complete ESP32 reference design built with KiCad.
</p>

## Preview

### PCB

![ESP32 PCB](images/pcb.jpg)

### Schematic

![ESP32 Schematic](images/schematic.jpg)

---

An open community project for learning ESP32 hardware design with KiCad.

This repository contains a complete ESP32 development board designed in KiCad, intended for makers, students, and engineers who want to learn custom PCB design and build their own ESP32-based hardware.

---

## Features

- ESP32-WROOM-32E
- USB Serial (CH340)
- 3.3V Power Regulator
- Reset / User Buttons
- A status LED / A user LED
- Programming Circuit
- Expansion Headers
- Symbols and Footprints on Components
- Component Replacement Guide

---

## Who is this project for?

- ESP32 beginners
- Electronics hobbyists
- PCB designers
- Students
- Engineers learning KiCad
- Makers who want to build their own ESP32 board

---

## Community Edition

This repository contains the **Community Edition**.

The goal is to provide a minimal but practical ESP32 reference design that anyone can study and build.

---

## Professional Editions

Professional versions are available separately and include additional features such as:

- Buck-Boost Power Supply
- LiPo Battery Charger
- Ultra-Low-Power Design
- Battery Powered Operation
- Additional Sensors
- Production-ready Hardware

---

## Documentation

- Component Replacement Guide
- Assembly Guide
- Hardware Documentation

---

## License

This project is licensed under the **Ippeul Community Hardware License (ICHL)**.

See the LICENSE file for details.

---

## Website

https://www.ippeul.io

---

## Support

If you find this project useful, please consider:

- ⭐ Starring this repository
- Sharing it with other makers
- Visiting https://www.ippeul.io

# ESP32 개발보드에서 커스텀 PCB까지

## KiCad로 만드는 나만의 센서 보드

ESP32 개발보드와 센서 모듈을 점퍼선으로 연결하는 데는 익숙하지만, 나만의 PCB를 만들려 하면 어디서부터 시작해야 할지 막막한가요?

인터넷에는 ESP32 회로, KiCad 사용법, PCB 주문법에 관한 정보가 많습니다. 그러나 전원 회로와 USB 통신 회로를 구성하고, 센서를 연결하고, PCB를 배선한 뒤 실제 제조 파일과 펌웨어까지 완성하는 전체 과정은 한곳에서 찾기 어렵습니다.

이 강의에서는 이미 완성된 ESP32 센서 보드 프로젝트를 따라가며 다음 과정을 직접 경험합니다.

* ESP32 기본 회로와 주요 핀 이해
* USB-C 전원과 5V→3.3V 전원 회로 설계
* CH340을 이용한 펌웨어 다운로드 회로 구성
* 온습도·조도 센서와 버튼·LED 연결
* KiCad 회로도 작성과 부품 라이브러리 관리
* 4층 PCB 부품 배치와 배선
* DRC 검사와 제조 파일 생성
* PCB 제조업체 주문
* 완성된 보드를 구동하는 펌웨어 작성
* BLE와 Wi-Fi를 이용한 외부 통신

강의를 마치면 ESP32 개발보드를 사용하는 수준을 넘어, 내가 원하는 센서와 기능을 넣은 PCB를 이해하고 수정할 수 있게 됩니다.

또한 강의에서 제공하는 KiCad 프로젝트와 단계별 펌웨어는 이후 환경 센서, 스마트홈 장치, 교육용 보드, 로봇, IoT 시제품을 만드는 출발점으로 다시 활용할 수 있습니다.

## 이런 분에게 권합니다

* 아두이노와 ESP32 개발보드는 사용해봤지만 PCB 설계는 처음인 분
* 점퍼선으로 만든 프로젝트를 하나의 보드로 정리하고 싶은 분
* KiCad를 실제 ESP32 프로젝트를 통해 배우고 싶은 분
* 센서 기반 제품이나 교육 키트를 개발하고 싶은 메이커
* 하드웨어와 펌웨어를 함께 이해하고 싶은 소프트웨어 개발자
* 자신만의 IoT 시제품을 만들고 싶은 예비 창업자

## 이런 분에게는 적합하지 않을 수 있습니다

* 회로와 PCB 설계 없이 ESP32 코딩만 배우고 싶은 분
* 클라우드 서버나 Android 앱 개발만을 원하는 분
* 고속 디지털 회로나 산업용 양산 설계를 찾는 숙련 하드웨어 엔지니어

## 강의를 통해 얻게 되는 결과

강의가 끝나면 영상을 시청했다는 기록만 남는 것이 아닙니다.

수정 가능한 KiCad 프로젝트, 제조 가능한 PCB 설계, 부품 라이브러리, 단계별 펌웨어와 이후 프로젝트에서 다시 사용할 수 있는 ESP32 회로 설계 경험이 남습니다.

개발보드를 사용하는 사람에서, 자신의 보드를 설계하는 사람으로 넘어가세요.

강의 링크:
https://inf.run/ZeYXg

