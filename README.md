# Smart Dustbin with Arduino Uno

[![Arduino](https://img.shields.io/badge/Arduino-Uno-blue)](https://www.arduino.cc/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

A smart dustbin that automatically opens when a person approaches, enhancing hygiene and convenience in waste disposal.

## Features

- **Automatic Lid Opening**: The dustbin lid opens automatically when a person is detected within 20cm.
- **Hygienic Design**: Minimizes physical contact with the dustbin, making it ideal for public places.
- **Easy to Use**: Simple setup and operation with clear instructions.

## APPARATUS REQUIRED

1. **Arduino Uno** – The microcontroller that controls the project.
2. **Ultrasonic Sensor (HC-SR04)** – To detect the distance of an object (i.e., when someone is near).
3. **Servo Motor** – To open and close the dustbin lid.
4. **Jumper Wires** – For connections.
5. **Dustbin** – The physical bin to automate.

## THEORY

A Smart Dustbin using Arduino Uno is an automated waste container designed to improve hygiene and convenience. The main concept revolves around minimizing physical contact when disposing of waste, making it especially useful in public places or in situations where cleanliness is crucial.

The system uses an ultrasonic sensor to detect when a person or object approaches the dustbin. The sensor sends out sound waves and measures the time it takes for the waves to bounce back after hitting an object. If an object (like a hand or trash) is within a specified distance, the sensor sends this information to the Arduino Uno.

The Arduino processes the data and, based on the object's proximity, activates a servo motor. The motor then opens the dustbin lid automatically, allowing the user to dispose of waste without touching the bin. After a short delay, the servo motor closes the lid again, ensuring the bin stays covered.

This project not only enhances hygiene but also offers a more modern, automated experience in waste management.

## Installation

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/yourusername/smart-dustbin.git
   cd smart-dustbin
   ```

2. **Open the Project in Arduino IDE**:
   - Open the `code.ino` file in the Arduino IDE.

3. **Upload the Code**:
   - Connect your Arduino Uno to your computer.
   - Select the appropriate board and port in the Arduino IDE.
   - Click the upload button to upload the code to your Arduino.

## PROCEDURE

1. **Assemble the Components**:
   - Assemble the components on a breadboard as per the circuit diagram.

2. **Make the Connections**:
   - Connect the components as follows:
     - Sensor Vcc → +5V Arduino
     - Sensor Gnd → Arduino Gnd
     - Sensor Trig Pin → Pin 9
     - Sensor Echo Pin → Pin 8
     - Motor Vcc → 5V
     - Motor Gnd → Arduino Gnd
     - Motor Signal Pin → Pin 3

3. **Test the Model**:
   - After uploading the code, test the model to ensure it functions correctly.

## RESULT

The Smart Dustbin successfully detects when a person approaches within 20cm and automatically opens the lid. After a 2-second delay, the lid closes again.

## PRECAUTIONS

1. All the connections should be tight.
2. Handle all the equipment carefully.
3. Compile and upload the correct program.
4. Check the connections before turning the circuit ON.
5. While connecting the jumper wires, take care of their pins.
6. Make sure that sensitivity of sensor is not zero.
7. Do not overload the dustbin with heavy objects, as it might interfere with the functioning of the servo motor and sensor.
8. Use a lightweight lid or ensure the servo motor is strong enough to lift the dustbin lid.

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Circuit Diagram

![Circuit Diagram](https://github.com/AddyB0t/Smart-Dustbin/blob/main/circuit%20diagram.png)

## Demonstration

![Demonstration](https://github.com/AddyB0t/Smart-Dustbin/blob/main/demonstration.png)
