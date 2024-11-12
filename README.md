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

![Image](https://github.com/user-attachments/assets/ea3dbec1-d9b4-4c16-9346-22a3c8b82c24)
- Click on **Just Download** to download the software or **Contribute and Download** if you feel generous.
![Image](https://github.com/user-attachments/assets/04eb9c9a-3d90-46e4-87aa-d08b0af8a488)
- Then, they will ask you again. This time also click on **Just Download**. 
![Image](https://github.com/user-attachments/assets/168e15ae-c7c7-40f1-ac45-ac35d2c2a7dc)

**The following part is for Window Users ONLY. For Mac and Linux User, please come early and ask for help from facilitators if you need it.**
 
- After finish downloading, there should be a zip file in your downloaded location. 
![Image](https://github.com/user-attachments/assets/cd1b3e18-68be-4a31-871b-c46c74a10047)
- Right click on the file and select extract all. This window should appear.
![Image](https://github.com/user-attachments/assets/3add0ccf-907a-44f2-95b8-17051a500198)

### ERROR OCCUR WHILE EXTRACTING
> When extracting the zip file, if an error happened saying that your PATH name is too long. Cancel the extraction and delete the partially extracted folder.  
![Image](https://github.com/user-attachments/assets/3d32935e-d502-42ab-846b-79e48b01a6cf)
> Go to C:\ and create a new folder, named it whatever you want. Inside the folder, create a folder called "Arduino_IDE"
> Move the zip file inside and extract again. This issue should disappear.
 
- After finish extraction, this should be inside the folder and you're done
![Image](https://github.com/user-attachments/assets/61c1637f-7cd4-47d6-9d1c-8ec02271e312)
- You can use the Arduino IDE.exe file to open **Arduino IDE**
![Image](https://github.com/user-attachments/assets/fdc471c4-cd37-465d-b66e-2ef1beff98a5)
- **BONUS** - You can add the shortcut to this app to your home screen by doing this
![Image](https://github.com/user-attachments/assets/541a6fb8-f2a4-432f-a5d4-a1906af92231)

After finishing installing the **Arduino IDE**, now we can start setting it up for the ESP32 board.
- Open the **Arduino IDE**, it should be the latest version **Arduino IDE 2.3.3**
![Image](https://github.com/user-attachments/assets/25c10c70-67f6-4c87-a8b3-da5959a95683)
- Click the second icon on the Taskbar, which will open the **BOARDS MANAGER**
- ![Image](https://github.com/user-attachments/assets/906c96d7-db37-49c3-8440-a9c0fca48bea)
- In the search bar, type "esp32" and press install on the third one, **esp32 by Espressif Systems**
- ![Image](https://github.com/user-attachments/assets/7758ccb8-69c5-413b-912f-33d57e9e4bfd)
- After finish installing, you are done with the **Arduino IDE** setup.
**IMPORTANT** - Before you try to upload your code to ESP32, click on the box highlighted green below.
- ![Image](https://github.com/user-attachments/assets/c780f102-3be3-45f9-999c-0d2e9922919c)
- Click **Select other board and port...**
- ![Image](https://github.com/user-attachments/assets/7d0a5880-2af8-4b86-8ebb-4a8e736f855c)
- At the search bar, type "DOIT ESP32 DEVKIT V1" and press it. Then, press **OK**
![Image](https://github.com/user-attachments/assets/07869ec5-1589-4545-b06d-707f4e80d0ee)

## Install ESP32 Driver

- Download Silicon Labs CP210x USB to UART Driver:
    1) Go to [CP210x Driver](https://www.silabs.com/developer-tools/usb-to-uart-bridge-vcp-drivers?tab=downloads).
    2) Choose the appropriate software according to your operating system.

**The following part is for Window Users ONLY. For Mac and Linux User, please come early and ask for help from facilitators if you need it.**

- For **Window** users, select the **CP210x Universal Windows Driver** and download it.
![Image](https://github.com/user-attachments/assets/c02fe951-c00a-46e3-bddc-a2ce0025fc67)
- After finish downloading, go ahead and extract the zip file.
![Image](https://github.com/user-attachments/assets/5c8f72ac-9dab-4484-8206-53c6c4b182f4)
- For details and installation guide about the driver, please refer to the text document. 
- For **non-Window users**, you can follow the installation guide inside. 
- For **Window users**, you can follow the rest of this guide which is based on the text document.

### Prompted install
If Windows prompts you to install a driver for a CP210x device (for example, if you plug a CP210x into your computer)
1. Use the dialog to browse for the driver location. Select **Browse my computer for drivers**
![Image](https://github.com/user-attachments/assets/71dab7b0-217e-4d21-ab6e-8bd2baf2519f)
2. Locate the driver folder (that you previously unzipped)
![Image](https://github.com/user-attachments/assets/a1f339f6-b791-4253-b818-3ea458e74f07)
3. Follow the instructions
### Manual install 
1. Using Windows File Explorer, locate the driver folder (that you previously unzipped)
![Image](https://github.com/user-attachments/assets/d4695b65-0d78-48da-a759-b02779dcbc4f)
2. Right click on the **silabser.inf** file and select Install    
![Image](https://github.com/user-attachments/assets/113789c8-d324-4d2c-a0dd-d7a32c693f7d)
3. Follow the instructions      
![Image](https://github.com/user-attachments/assets/3c4e5272-0e3d-4f84-ba61-b2b13335d146)
