# MagicQ Encoder Wing

## Hardware Used
- Arduino Uno
- 5 Rotary Encoders with detents
- DIY case of your choice

## Build
I utilized a plastic enclosure for this project. The key components, including Arduino Uno and the wiring for all connections, are housed in the lower compartment of the enclosure.
Additionally, a wooden panel was mounted in the upper section of the enclosure to accommodate the placement of the rotary encoders.

Unfortunately, as I had already closed the enclosure (opss!!), I wasn't able to capture a photo of the internal connections.
However, the connection schema for the rotary encoders to Arduino Uno is straightforward.
Please refer to the following schematic for the encoder connections:
![Encoder Connection](https://github.com/gabrielebaudo/MagicQEncoderWing/blob/main/EncoderConnection.png?raw=true)

### Code Explanation
Due to the limitation of Arduino Uno having only two interrupt pins, interrupt-based mechanisms were not employed.
Instead, polling is used, although it may not be the most efficient solution. Additionally, debounce mechanisms have not been implemented.

## Setting Up MagicQ Software by ChamSys
In order to use the device with MagicQ, follow these steps:

1. Ensure you are out of demo mode, as the serial input protocol used (MagicQ Serial) is only available outside of demo mode. 

2. Navigate to the MagicQ Setup menu, then select Ports submenu and configure the following settings:
   - **Serial COM Port:** Set the correct COM port where your arduino is connected. On Windows you can find it via Device Manager.
   - **Serial Remote Protocol:** Set the Serial Remote Protocol option to "ChamSys RX".
   
   ![Serial COM Port](https://github.com/gabrielebaudo/MagicQEncoderWing/blob/main/SerialPort.png?raw=true)
   ![Serial Remote Protocol](https://github.com/gabrielebaudo/MagicQEncoderWing/blob/main/SerialProtocol.png?raw=true)

3. Import the MagicQ macros by moving the `Macros.set` file into the MagicQ show folder. Open it as if it were a new show.

4. Create the necessary automations manually. These automations are machine-dependent and not show-dependent, meaning they only need to be set up once. To create them, follow these steps:
   - Open MagicQ and navigate to the Macro windows, then click on View Autom softbutton.
   - Configure the automations based on the provided photo.

   ![Automation Configuration](https://github.com/gabrielebaudo/MagicQEncoderWing/blob/main/Automations.png?raw=true)

Once these steps are completed, the system is ready to use. The encoders can now be utilized as if you had a physical Chamsys wing with encoders.

