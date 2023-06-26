# Code Explanation - Particle Simulation

This code is a particle simulation program implemented in Processing. It creates a visual display of particles moving on a screen based on the mouse position and sensor input from an Arduino board.

## Prerequisites

Before running this code, you need to ensure that you have the following prerequisites:

- Processing: Install the Processing development environment on your computer.
- Arduino: Connect an Arduino board to your computer and upload a program that sends sensor data via serial communication.

## Setup

1. Open the code in Processing.
2. Connect your Arduino board to the computer.
3. Modify the `portName` variable in the `setup()` function to match the corresponding port number connected to your Arduino. For example, `String portName = "/dev/cu.usbmodem1422301";` (Replace `/dev/cu.usbmodem1422301` with your actual port name).
4. Set the baud rate (`9600` by default) to match the baud rate specified in your Arduino program.
5. Run the code.

## Functionality

### Variables

- `n`: The number of particles (dots) in the simulation.
- `m`, `x`, `y`, `vx`, `vy`: Arrays to store the mass, position, and velocity of each particle.
- `redchannel`, `bluechannel`, `greenchannel`: Arrays to store RGB channel values for coloring the particles.
- `shape`: Array to store the shape type for each particle.

### `setup()`

- Initializes the Processing sketch.
- Sets the sketch to full screen.
- Sets the fill color with an alpha value of 10 to create a transparent effect.
- Calls the `reset()` function to initialize the particle properties.
- Initializes the serial communication with the Arduino using the specified port name and baud rate.

### `draw()`

- Continuously updates and renders the sketch.
- Reads the sensor data from the Arduino via serial communication.
- Clears the screen by drawing a transparent black rectangle covering the entire screen.
- Updates the position and velocity of each particle based on the mouse position and sensor data.
- Wraps the particles around the screen edges to create an infinite effect.
- Determines the color and shape of each particle based on its properties.
- Draws the particles on the screen.

### `reset()`

- Resets the properties of each particle to random values.
- Generates random mass, position, color, and shape values for each particle.

### `mousePressed()`

- Resets the properties of each particle when the mouse is pressed.

## How to Use

1. Install Processing and open the code.
2. Connect your Arduino board and upload a program that sends sensor data via serial communication.
3. Modify the `portName` variable in the code to match your Arduino's port name.
4. Run the code in Processing.
5. Move the mouse cursor to influence the particle movements.
6. Observe the particles' behavior based on the sensor data received from the Arduino.
7. Click the mouse to reset the particle properties.

Note: The appearance and behavior of the particles can be customized by modifying the code. Feel free to experiment with different parameters and effects.

## Dependencies

- This code relies on the Processing library for visualization and interaction.

## Credits

This code was created by [Your Name]. Feel free to modify and distribute it according to your needs.

For more information about Processing, visit the [Processing website](https://processing.org/).

For more information about Arduino, visit the [Arduino website](https://www.arduino.cc/).
