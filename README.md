# 8051 Keypad Interface with 7-Segment Display

This project demonstrates interfacing a 4x3 matrix keypad with the AT89C51 (8051) microcontroller to display pressed digits on a 7-segment display using Keil C and Proteus.

# Project Overview

- Microcontroller: AT89C51 (8051)
- Input Device: 4x3 Matrix Keypad
- Output Device: Common cathode 7-segment display
- Programming Language: C (Keil μVision)
- Simulation Tool: Proteus 8

When a key is pressed on the keypad, the corresponding digit is decoded and shown on the 7-segment display using the appropriate 7-segment code.

# Files Included

| Filename         | Description                              |
|------------------|------------------------------------------|
| `keypad.c`       | Keil C source code for keypad detection  |
| `keypad.hex`     | Compiled hex file to load into Proteus   |
| `keypad.uvproj`  | Keil μVision project file                 |

# Logic Summary

The program scans the keypad row-wise:
- Rows are set low one at a time while others are high.
- If a column pin goes low during a row scan, a keypress is detected.
- The segment display is updated with the respective hex code for that key.

# Circuit Setup (Proteus)

- P2.0 – P2.2: Columns C1, C2, C3 of keypad
- P2.3 – P2.6: Rows R1 to R4 of keypad
- P3.0 – P3.7: Connected to 7-segment display segments (a–g)

# How to Run

1. Open the project in Keil uVision and compile `keypad.c`.
2. Load the generated `keypad.hex` into the AT89C51 in Proteus.
3. Simulate the circuit and press keys on the virtual keypad.
4. Observe the display showing the pressed key.


# Author

DIY Inventor (Krishna Agarwal)

---

