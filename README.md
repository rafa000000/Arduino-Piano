# 🎹 Arduino Piano (8-Note Synthesizer)

## Project Overview
This project transforms an Arduino microcontroller into a functional, 8-note electronic keyboard. It demonstrates simultaneous input/output 
handling by pairing tactile feedback (buttons) with both audio (Piezo buzzer) and visual (LED) outputs.

When a user presses a specific button, the system produces a corresponding musical note from the C Major 
scale (C4 to C5) and lights up a mapped LED, creating a synchronized audio-visual experience.

*> **Note:** For a visual look, acess: https://www.tinkercad.com/things/ewI3n8o5Gzi-projeto-piano-com-arduino.*

## 🛠 Hardware Requirements
* **Microcontroller:** Arduino Uno (or compatible)
* **Audio:** 1x Passive Piezo Buzzer (Pin 9)
* **Inputs:** 8x Pushbuttons
* **Outputs:** 8x LEDs (various colors recommended)
* **Resistors:**
    * 16x 220Ω (for buttons and LEDS)
* **Wiring:** Jumper wires and Breadboard
  

## 🔌 Pin Configuration
| Note | Frequency | Button Pin | LED Pin |
| :--- | :--- | :--- | :--- |
| **C4** | 523 Hz | D2 | D13 |
| **D4** | 587 Hz | D3 | D12 |
| **E4** | 659 Hz | D4 | D11 |
| **F4** | 698 Hz | D5 | D1 |
| **G4** | 784 Hz | D6 | D0 |
| **A4** | 880 Hz | D7 | A0 |
| **B4** | 988 Hz | D8 | A1 |
| **C5** | 1047 Hz | D10 | A2 |


## ⚙️ How It Works
The software utilizes a polling mechanism inside the main `loop`.
1.  **State Detection:** The program continuously reads the digital state of all 8 buttons.
2.  **Edge Triggering:** It compares the *current* state of a button against its *previous* state. This ensures the sound plays only when the button is actively pressed, rather than looping indefinitely or glitching.
3.  **Output Generation:**
    * Uses the `tone()` function to generate a PWM square wave at a specific frequency on the Buzzer pin.
    * Uses `digitalWrite()` to drive the corresponding LED High.
