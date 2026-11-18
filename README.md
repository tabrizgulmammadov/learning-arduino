# learning-arduino

My Arduino lessons. Each lesson is one sketch in its own folder.

## Lessons

| Lesson | Sketch | What it shows | Serial baud |
|--------|--------|---------------|-------------|
| L1 | [L1-hello-world](L1-hello-world/L1-hello-world.ino) | `Serial` output, variables, `if/else`, `while` loop | 9600 |
| L2 | [L2-led-lamp](L2-led-lamp/L2-led-lamp.ino) | Blink one LED on pin 8 (1 s on, 1 s off) | 9600 |
| L3 | [L3-traffic-light](L3-traffic-light/L3-traffic-light.ino) | Traffic light: red 5 s, yellow blinks 3 s, green 4 s | 9600 |
| L4 | [L4-led-brightness-control](L4-led-brightness-control/L4-led-brightness-control.ino) | Potentiometer on A1 sets LED brightness on pin 3 (PWM) | 9600 |

## Wiring

- **L2:** LED on pin 8, through a resistor to GND.
- **L3:** red LED on pin 11, yellow LED on pin 12, green LED on pin 13. Each LED goes through a resistor to GND.
- **L4:** potentiometer middle pin on A1, outer pins on 5V and GND. Red LED on pin 3, through a resistor to GND.

## How to run

1. Open the `.ino` file in the Arduino IDE.
2. Select your board and port.
3. Click **Upload**.
4. Open the Serial Monitor and set the baud rate from the table.
