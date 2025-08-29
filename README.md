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
├── - main.cpp # Entry point, user input, and demo
├── - ModuloNCounter.h # Header file for single digit counter
├── - ModuloNCounter.cpp # Implementation of ModuloNCounter
├── - MultipleDigitCounter.h # Header file for multi-digit counter
├── - MultipleDigitCounter.cpp # Implementation of MultipleDigitCounter
