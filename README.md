# Multi-Digit Modulo Counter

This project implements a **Modulo-N Counter** and a **Multi-Digit Counter** in C++.  
It supports different counting bases (2, 8, 10, 16) and provides both **pre-increment** and **post-increment** functionality.

---

## Features
- **ModuloNCounter**:  
  - Single digit counter with customizable base.  
  - Supports bases: Binary (2), Octal (8), Decimal (10), Hexadecimal (16).  
  - Automatically resets to 0 after reaching the maximum value.  

- **MultipleDigitCounter**:  
  - Multi-digit counter using an array of `ModuloNCounter`.  
  - Handles **carry-over** between digits.  
  - Supports both **pre-increment (`++counter`)** and **post-increment (`counter++`)** operators.  

- **Interactive Main Program**:  
  - User provides number of digits, base, and count limit.  
  - Prints formatted counter values with appropriate line breaks.  
  - Demonstrates both pre- and post-increment examples.  

---

## Project Structure
├── main.cpp # Entry point, user input, and demo<br>
├── ModuloNCounter.h # Header file for single digit counter<br>
├── ModuloNCounter.cpp # Implementation of ModuloNCounter<br>
├── MultipleDigitCounter.h # Header file for multi-digit counter<br>
├── MultipleDigitCounter.cpp # Implementation of MultipleDigitCounter<br>

## How to Run

1. **Compile** the provided source files with a C++ compiler:  
   [Source Code Link](https://github.com/DheerajSwaroopSaligramaMahesh/Advanced_Programming_Techniques-ModuloNCounter/tree/main/ModuloNCounter/myCode)

2. Run the generated executable.

3. Enter parameters when prompted:
   - Number of digits (e.g., 3)
   - Counter base (choose from 2, 8, 10, 16)
   - Count limit (e.g., 50)

4. View the output of the counter values, formatted according to the base.

5. At the end of execution, observe demonstrations of pre-increment (++counter) and post-increment (counter++) operations.


