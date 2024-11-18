# Wokwi - ESP32 Simulation

## Introduction

### Welcome to the using ESP32 simulation with Wokwi!
- Our goal is to give you hands-on experience with the **ESP32**, helping you understand its architecture, peripherals, and programming environment. Throughout the workshop, you'll learn how to set up and program the **ESP32** using simulator like [Wokwi](https://wokwi.com/projects/new/esp32), explore its GPIO, sensors, and actuators, and implement simple projects.
- Whether you’re new to microcontrollers or have experience with other platforms, this workshop will equip you with practical skills and insights to design your own embedded solutions using the **ESP32**. We’ll begin with the basics and gradually progress to advanced projects, ensuring a strong foundational understanding. Get ready to bring your ideas to life through the power of embedded systems! 

# Install VSCode and Setup Wokwi with VSCode
## DISCLAIMER: Wokwi with VSCode is not free, and this guide will only 30 day free license  

## Setup Arduino IDE

- Download Arduino IDE:
    1) Go to [Arduino](https://www.arduino.cc/en/software).
    2) Choose a build according to your operating system.
### Download


**The following part is for Window Users ONLY.**
### Extraction 
> - After finish downloading, there should be a zip file in your downloaded location. 

> - Before extracting the zip file, please navigate to your **C: drive**.

>
> - After navigating to your **C: drive**, create a new folder by pressing **New**.
> - Name the Folder as **Arduino_IDE**.
>
> - Please navigate back to your **Downloads** folder and select the zip file. Then, press **Cut**. 

>
> - Finally, navigate back to the **Arduino_IDE** folder and paste in the zip file.
>
> - Select the zip file, and press **Extract all**.

>
> - Follow the instruction.  
> - After finishing the extraction, this window should popped up showing the extracted content. You can use the Arduino IDE.exe file to open **Arduino IDE**

> - **BONUS** - You can add the shortcut to this app to your home screen by doing this


After finishing installing the **Arduino IDE**, now we can start setting it up for the ESP32 board.
> - Open the **Arduino IDE**, it should be the latest version **Arduino IDE 2.3.4**  

> - Click the second icon on the Taskbar, which will open the **BOARDS MANAGER**  

> - In the search bar, type "esp32" and press install on the third one, **esp32 by Espressif Systems**  
> - After finish installing, you are done with the **Arduino IDE** setup.
> **IMPORTANT** - Before you try to upload your code to ESP32, click on the box highlighted red below.  

> - Click **Select other board and port...**  

> - At the search bar, type "DOIT ESP32 DEVKIT V1" and press it. Then, press **OK**


## Install ESP32 Driver

- Download Silicon Labs CP210x USB to UART Driver:
    
    2) Choose the appropriate software according to your operating system.


