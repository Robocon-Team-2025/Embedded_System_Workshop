# Wokwi - ESP32 Simulation

## Introduction

### Welcome to the using ESP32 simulation with Wokwi!
- Our goal is to give you hands-on experience with the **ESP32**, helping you understand its architecture, peripherals, and programming environment. Throughout the workshop, you'll learn how to set up and program the **ESP32** using simulator like [Wokwi](https://wokwi.com/projects/new/esp32), explore its GPIO, sensors, and actuators, and implement simple projects.
- Whether you’re new to microcontrollers or have experience with other platforms, this workshop will equip you with practical skills and insights to design your own embedded solutions using the **ESP32**. We’ll begin with the basics and gradually progress to advanced projects, ensuring a strong foundational understanding. Get ready to bring your ideas to life through the power of embedded systems! 

# Install VSCode and Setup Wokwi for VS Code
## DISCLAIMER: Wokwi for VS Code is not free, and this guide will only provide you the version with 30 day free license. However, you can use different email to activate a new 30 day license.   

## Install VS Code

- Download Arduino IDE:
    1) Go to [Visual Studio Code](https://code.visualstudio.com/download).
    2) Choose a build according to your operating system.
![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-01.png) 

**The following part is for Window Users ONLY.**
### Installation
> - After finish downloading, there should be a file called **VSCodeUserSetup-x64-1.95.3** in your downloaded location.
> ![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-02.png)
> - Double Click on the file mentioned above.  
> ![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-03.png)
> - Check all the boxes as shown below and follow the instruction.  
> ![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-041.png)
> ![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-05.png)
> ![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-06.png) 
> ![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-07.png)

### Setup Wokwi for VS Code
- After finish installation, Visual Studio Code should be opened by itself.
![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-08.png)
- Click on the last icon on the Taskbar, which will open **Extensions**.  
![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-091.png)
- In the search bar, type "platformio". Select the first one **PlatformIO IDE**.  
![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-10.png) 
![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-11.png) 
![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-12.png) 
![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-13.png) 
![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-14.png) 
![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-14.png) 
![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-15.png) 
![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-16.png) 
![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-17.png) 
![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-18.png) 
![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-19.png) 
![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-20.png) 
![image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/VSCode-21.png) 

>
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


