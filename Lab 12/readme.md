# 💻 C++ Programming Fundamentals: Lab 12 - Functions (Modular Programming)

This repository contains two files for Lab 12, focusing on the powerful concept of **Functions** to achieve modular and reusable code. The lab was instructed by **Sir Awais Rathore**.

* `Lab_12_functions.cpp`: Covers function basics, return types, parameters, and **Pass-by-Reference**.
* `Lab12-b_Function Recursionetc.cpp`: Covers **Recursion**, **Pass-by-Reference** for swapping, and **Function Overloading**.

[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://en.cppreference.com/w/)
[![Lab](https://img.shields.io/badge/Lab-12-informational.svg)](https://github.com/your-username/programming-fundamentals)

---

## 📑 Table of Contents

* [✨ Lab Overview](#-lab-overview)
* [🔍 **LAB-12 TASK DETAILS (PART A & B)**](#-lab-12-task-details-part-a--b)
* [🚀 How to Run the Code](#-how-to-run-the-code)
* [👤 Author & Contact](#-author--contact)

---

## ✨ Lab Overview

This lab is crucial for moving beyond sequential code by utilizing functions to create modular, readable, and maintainable C++ programs.

**Key Concepts Demonstrated:**

* **Standard Functions:** Defining, declaring, and calling functions (void, with return values, and with arguments).
* **Pass-by-Value (P-B-V):** Copying argument values into the function.
* **Pass-by-Reference (P-B-R):** Modifying variables outside the function using the `&` operator.
* **Recursion:** Functions calling themselves to solve problems like summation.
* **Function Overloading:** Creating multiple functions with the same name but different parameter lists.

---

## 🔍 LAB-12 TASK DETAILS (PART A & B)

This table summarizes the objectives and concepts across both files of Lab 12.

### Part A: Standard Functions (`Lab_12_functions.cpp`)

| Program Name | Objective/Description | Key Concepts | Required Output/Format |
| :--- | :--- | :--- | :--- |
| **Program 1 (Welcome Message)** | Display a simple greeting using a dedicated function. | Void Function (No I/O) | Prints "Hello, Welcome to C++ Functions!". |
| **Program 2 (Even Odd Checker)** | Check if a user-input number is even or odd. | Function Call-by-Value | States the number is **Even** or **Odd**. |
| **Program 3 (Rectangle Area)** | Calculate the area of a rectangle given length and width. | Function with Return Value | Displays the calculated area. |
| **Program 4 (Modular Bill System)** | Implement a complex menu and calculate a final bill, utilizing separate functions for each logic segment (cost, tax, discount, time). | **Pass-by-Reference** (`&`), Modular Design | A final, detailed and formatted **Bill Summary** showing subtotal, tax, discount, and total. |

### Part B: Advanced Functions (`Lab12-b_Function Recursionetc.cpp`)

| Program Name | Objective/Description | Key Concepts | Required Output/Format |
| :--- | :--- | :--- | :--- |
| **Program 5 (Summation)** | Calculate the sum of the first N natural numbers using self-calling logic. | **Recursion** (Base/Recursive Case) | A formatted table showing N and the final sum. |
| **Program 6 (Value Swapper)** | Swap the values of two variables entered by the user. | **Pass-by-Reference** (`&`) | Displays the initial values and the correctly **swapped** final values. |
| **Program 7 (Calculator)** | Implement a flexible arithmetic calculator that can operate on both 2 or 3 numbers. | **Function Overloading** | Displays the result of the calculation based on the user's choice and number of operands. |

---

## 🚀 How to Run the Code

To compile and execute these lab files, you will need a C++ compiler (e.g., `g++`).

1.  **Navigate to the Directory:**
    ```bash
    cd path/to/lab-12
    ```

2.  **Compile the Files:**

    (Ensure the program you want to run is **uncommented** in the `.cpp` file.)

    ```bash
    g++ Lab_12_functions.cpp -o Lab-12a
    g++ Lab12-b_Function\ Recursionetc.cpp -o Lab-12b
    ```

3.  **Execute the Programs:**

    ```bash
    ./Lab-12a
    ./Lab-12b
    ```

---

## 👤 Author & Contact

* **Author:** Shahzad Ahmed Awan
* **Instructor:** Sir Awais Rathore (First Semester)
* **GitHub:** [https://github.com/Shahzad-Ahmed-Awan](https://github.com/Shahzad-Ahmed-Awan)
* **Email:** [shahzadawan.official15@gmail.com](mailto:shahzadawan.official15@gmail.com)
* **LinkedIn:** [https://www.linkedin.com/in/shahzad-ahmed-awan-a803a9370](https://www.linkedin.com/in/shahzad-ahmed-awan-a803a9370)

⭐️ If you find this file useful, kindly **star** it!