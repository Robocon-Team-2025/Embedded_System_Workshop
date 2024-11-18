# Embedded System Workshop

## Introduction

### Welcome to the Embedded Systems Workshop!

- In this workshop, we'll dive into the exciting world of embedded systems using the powerful and versatile **ESP32** microcontroller. The **ESP32** has become a popular choice among developers and hobbyists alike for its affordability, rich features, and ease of use. It integrates Wi-Fi, Bluetooth, and low-power capabilities, making it ideal for a wide range of applications from IoT projects to industrial automation.

- Our goal is to give you hands-on experience with the **ESP32**, helping you understand its architecture, peripherals, and programming environment. Throughout the workshop, you'll learn how to set up and program the **ESP32** using the **Arduino IDE** and also using simulator like [Wokwi](https://wokwi.com/projects/new/esp32), explore its GPIO, sensors, and actuators, and implement simple projects.

- Whether you’re new to microcontrollers or have experience with other platforms, this workshop will equip you with practical skills and insights to design your own embedded solutions using the **ESP32**. We’ll begin with the basics and gradually progress to advanced projects, ensuring a strong foundational understanding. Get ready to bring your ideas to life through the power of embedded systems! 


# Setup Arduino IDE and Install required ESP32 driver

## Setup Arduino IDE

- Download Arduino IDE:
    1) Go to [Arduino](https://www.arduino.cc/en/software).
    2) Choose a build according to your operating system.
### Download
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-01.png)
> - Click on **Just Download** to download the software or **Contribute and Download** if you feel generous.
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-02.png)
> - Then, they will ask you again. This time also click on **Just Download**. 
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-03.png)

**The following part is for Window Users ONLY.**
### Extraction 
> - After finish downloading, there should be a zip file in your downloaded location. 
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-04.png)
> - Before extracting the zip file, please navigate to your **C: drive**.
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-05.png)
>
> - After navigating to your **C: drive**, create a new folder by pressing **New**.
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-06.png)
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-07.png)
> - Name the Folder as **Arduino_IDE**.
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-08.png)
>
> - Please navigate back to your **Downloads** folder and select the zip file. Then, press **Cut**. 
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-09.png)
>
> - Finally, navigate back to the **Arduino_IDE** folder and paste in the zip file.
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-10.png)
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-11.png)
>
> - Select the zip file, and press **Extract all**.
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-12.png)
>
> - Follow the instruction.  
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-13.png)
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-14.png)
> - After finishing the extraction, this window should popped up showing the extracted content. You can use the Arduino IDE.exe file to open **Arduino IDE**
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-151.png)
> - **BONUS** - You can add the shortcut to this app to your home screen by doing this
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-17.png)  

After finishing installing the **Arduino IDE**, now we can start setting it up for the ESP32 board.
> - Open the **Arduino IDE**, it should be the latest version **Arduino IDE 2.3.4**  
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-18.png)  
> - Click the second icon on the Taskbar, which will open the **BOARDS MANAGER**  
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-19.png)  
> - In the search bar, type "esp32" and press install on the third one, **esp32 by Espressif Systems**  
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-20.png)
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-21.png)
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-22.png) 
> - After finish installing, you are done with the **Arduino IDE** setup.
> **IMPORTANT** - Before you try to upload your code to ESP32, click on the box highlighted red below.  
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-23.png)
> - Click **Select other board and port...**  
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-24.png)
> - At the search bar, type "DOIT ESP32 DEVKIT V1" and press it. Then, press **OK**
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Arduino-26.png)

## Install ESP32 Driver

- Download Silicon Labs CP210x USB to UART Driver:
    1) Go to [CP210x Driver](https://www.silabs.com/developer-tools/usb-to-uart-bridge-vcp-drivers?tab=downloads).
    2) Choose the appropriate software according to your operating system.

**The following part is for Window Users ONLY.**
### Download
> - Select the **CP210x Universal Windows Driver** and download it.
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/CP210X-1.png)  
> - After the download finished, the file should be available in your **Downloads** folder. 
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/CP210X-2.png)  
> - Select the zip file and click **Extract all**.  
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/CP210X-3.png)
> - Follow the instruction.  
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/CP210X-4.png)

### Manual Install
> - After finish extracting, navigate into the extracted folder.  
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/CP210X-5.png)
> - Select the file called "silabser.inf" with **Setup Information** type.
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/CP210X-61.png)
> - Follow the instruction.  
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/CP210X-7.png)  
> - For details and installation guide about the driver, please refer to the text document **CP210x_Universal_Windows_Driver_ReleaseNotes.txt**. 

### Prompted install
> If Windows prompts you to install a driver for a CP210x device (for example, if you plug a CP210x into your computer)
> 1. Use the dialog to browse for the driver location. Select **Browse my computer for drivers**
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/CP210X-8.png)  
> 2. Locate the driver folder (that you previously unzipped)
> ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/CP210X-9.png)  
> 3. Follow the instructions.  
