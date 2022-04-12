# Arduino-UNO

Arduino is an open-source electronics platform based on easy-to-use hardware and software. Arduino boards are able to read inputs - light on a sensor, a finger on a button,
or a Twitter message - and turn it into an output - activating a motor, turning on an LED, publishing something online.


# I2C Communication Bus

I2C combines the best features of SPI and UARTs. With I2C, you can connect multiple slaves to a single master (like SPI) and you can have multiple masters controlling single, or multiple slaves. This is really useful when
we want to have more than one microcontroller logging data to a single memory card or displaying text to a single LCD.
Like UART communication, I2C only uses two wires to transmit data between devices:

![image](https://user-images.githubusercontent.com/73461681/163008635-c3271e2c-9cd7-45a4-a367-a844879703d0.png)


# About the project:

A simple I2C communication bus (consisiting of SDA and SCL lines) setup has been established between two Arduino Boards to control the flcikering rate of 12 LED(s) on the slave board
through the commands from the master device on the serial line which is initiated by a PWM signal generatd by a A2D conversion of a potentiometer signal.

![image](https://user-images.githubusercontent.com/73461681/163010354-513bb54b-6ad9-4c6f-af13-642a241eb55f.png)
