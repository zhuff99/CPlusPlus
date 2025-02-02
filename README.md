
# Bank Account Interest Calculator

This program simulates a bank account to demonstrate how interest rates can affect savings over time, with or without additional monthly deposits. It is designed to take user input, validate it, and display a yearly report showing the account balance and interest earned.

## Table of Contents
- [Description](#description)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Program Structure](#program-structure)
- [Author](#author)

---

## Description

This program takes user inputs for:
- Initial investment amount
- Monthly deposit amount
- Annual interest rate
- Number of years

It then calculates and displays two reports:
1. Account balance and interest without additional monthly deposits
2. Account balance and interest with additional monthly deposits

The program helps users visualize how deposits and interest rates impact their savings over time.

---

## Features
- **User Input Validation:** Ensures all inputs are valid doubles or integers to prevent errors.
- **Dynamic Reports:** Displays yearly summaries with or without monthly contributions.
- **Interactive Loop:** Allows users to re-enter values and recalculate reports as needed.

---

## Installation

1. Clone or download this repository.
2. Ensure you have a C++ compiler installed (e.g., g++, Visual Studio).
3. Compile the program using the command:
   ```sh
   g++ -o BankAccountInterestCalculator main.cpp BankAccount.cpp
   ```
4. Run the compiled executable:
   ```sh
   ./BankAccountInterestCalculator
   ```

---

## Usage

1. **Run the program:** Start the executable after compiling.
2. **Provide inputs:** Enter your initial investment, monthly deposit, annual interest rate, and number of years.
3. **View reports:** The program will display reports showing projected savings and interest.
4. **Adjust values (optional):** If desired, you can re-enter values to see how different inputs affect results.

Example interaction:
```
Initial Investment Amount: 1000
Monthly Deposit: 100
Annual Interest: 5
Number of Years: 10
```

The program will then display two yearly reports.

---

## Program Structure

- **`main.cpp`:** Contains the core logic and user interaction flow.
- **`BankAccount.h` and `BankAccount.cpp`:** Defines the `BankAccount` class for storing and processing user input and calculations.
- **Methods Overview:**
  - `printMenu()`: Displays the current user inputs.
  - `userInput()`: Collects and validates user inputs.
  - `printYearlyStaticReport()`: Generates yearly reports of balances and interest.
  - `userContinue()`: Offers users the option to re-enter values and recalculate.

---

## Author
- **Zachary Huff**
- **CS210 - Southern New Hampshire University**

---

## Acknowledgments
- Thanks to Southern New Hampshire University for providing this project as part of the CS210 curriculum.
```
