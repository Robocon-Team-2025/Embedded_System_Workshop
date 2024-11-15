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

![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20210514.png)
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20210856.png)
- Click on **Just Download** to download the software or **Contribute and Download** if you feel generous.
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20210908.png)
- Then, they will ask you again. This time also click on **Just Download**. 
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20210921.png)

**The following part is for Window Users ONLY. For Mac and Linux User, please come early and ask for help from facilitators if you need it.**
 
- After finish downloading, there should be a zip file in your downloaded location. 
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20210930.png)
- Right click on the file and select extract all. This window should appear.
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20210936.png)

### ERROR OCCUR WHILE EXTRACTING
> When extracting the zip file, if an error happened saying that your PATH name is too long. Cancel the extraction and delete the partially extracted folder.  
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20210948.png)

> Go to C:\ and create a new folder, named it whatever you want. Inside the folder, create a folder called "Arduino_IDE"
> Move the zip file inside and extract again. This issue should disappear.
 
- After finish extraction, this should be inside the folder and you're done
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20211001.png)
- You can use the Arduino IDE.exe file to open **Arduino IDE**
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20211011.png)
- **BONUS** - You can add the shortcut to this app to your home screen by doing this
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20211030.png)

After finishing installing the **Arduino IDE**, now we can start setting it up for the ESP32 board.
- Open the **Arduino IDE**, it should be the latest version **Arduino IDE 2.3.3**
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20211048.png)
- Click the second icon on the Taskbar, which will open the **BOARDS MANAGER**
- ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20211057.png)
- In the search bar, type "esp32" and press install on the third one, **esp32 by Espressif Systems**
- ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20211105.png)
- After finish installing, you are done with the **Arduino IDE** setup.
**IMPORTANT** - Before you try to upload your code to ESP32, click on the box highlighted green below.
- ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20211115.png)
- Click **Select other board and port...**
- ![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20211122.png)
- At the search bar, type "DOIT ESP32 DEVKIT V1" and press it. Then, press **OK**
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20211129.png)

## Install ESP32 Driver

- Download Silicon Labs CP210x USB to UART Driver:
    1) Go to [CP210x Driver](https://www.silabs.com/developer-tools/usb-to-uart-bridge-vcp-drivers?tab=downloads).
    2) Choose the appropriate software according to your operating system.

**The following part is for Window Users ONLY. For Mac and Linux User, please come early and ask for help from facilitators if you need it.**

- For **Window** users, select the **CP210x Universal Windows Driver** and download it.
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20211139.png)
- After finish downloading, go ahead and extract the zip file.
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20211146.png)
- For details and installation guide about the driver, please refer to the text document. 
- For **non-Window users**, you can follow the installation guide inside. 
- For **Window users**, you can follow the rest of this guide which is based on the text document.

### Prompted install
If Windows prompts you to install a driver for a CP210x device (for example, if you plug a CP210x into your computer)
1. Use the dialog to browse for the driver location. Select **Browse my computer for drivers**
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20211157.png)
2. Locate the driver folder (that you previously unzipped)
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20211205.png)
3. Follow the instructions
### Manual install 
1. Using Windows File Explorer, locate the driver folder (that you previously unzipped)
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20211212.png)
2. Right click on the **silabser.inf** file and select Install    
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20211219.png)
3. Follow the instructions      
![Image](https://github.com/Robocon-Team-2025/Embedded_System_Workshop/blob/main/Image/Screenshot%202024-11-15%20211227.png)
