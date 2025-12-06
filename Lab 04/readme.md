# 💻 C++ Programming Fundamentals: Lab 4 - Conditional Operators

This repository file (`lab 4.cpp`) contains tasks completed for Lab 4 of the C++ Programming Fundamentals course, instructed by **Sir Awais Rathore**. The core focus of this lab is on decision-making using the **Conditional Operator (Ternary Operator)**.

[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://en.cppreference.com/w/)
[![Lab](https://img.shields.io/badge/Lab-4-informational.svg)](https://github.com/your-username/programming-fundamentals)

---

## 📑 Table of Contents

* [✨ Lab Overview](#-lab-overview)
* [🔍 **LAB-4 DETAILED TASK MATRIX**](#-lab-4-detailed-task-matrix)
* [🚀 How to Run the Code](#-how-to-run-the-code)
* [👤 Author & Contact](#-author--contact)

---

## ✨ Lab Overview

This lab is dedicated to implementing **decision-making logic** using C++'s concise **Conditional (Ternary) Operator (`? :`)** instead of traditional `if-else` statements.

**Key Concepts Demonstrated:**

* **Conditional Operator (`? :`)**
* **Nested Conditional Logic**
* **Logical Operators** (`&&` - Logical AND)
* **Modulus Operator** (`%`) for checking parity
* **I/O Manipulators** (`setw`, `setfill`) for structured, formatted output

---

## 🔍 LAB-4 DETAILED TASK MATRIX

This table provides a concise summary of the objective and logic for each of the three programs found within `lab 4.cpp`.

| Program Name | Objective | Concepts Used | Logic/Conditions |
| :--- | :--- | :--- | :--- |
| **Program 1 (Even ODD Calculator)** | Check if a user-input integer is even or odd. | Conditional Operator, Modulus Operator (`%`). | Condition: `number % 2 == 0` |
| **Program 2 (Age Status)** | Categorize a user-input age into Child, Teenager, or Adult. | Nested Conditional Operators. | **Categories:** `Age < 13` (Child) $\rightarrow$ `Age >= 20` (Adult) $\rightarrow$ else (Teenager). |
| **Program 3 (Banking App)** | Determine account type and check special offer eligibility. | Nested Conditional Operators, Logical AND (`&&`), `bool` variable. | **Account Type:** Based on balance (`< $100` / `\le $500` / `> $500`). **Offer:** Requires `Balance > $200 AND Loyal == 1`. |

---

## 🚀 How to Run the Code

To compile and execute this lab file, you will need a C++ compiler (e.g., `g++`).

1.  **Navigate to the Directory:**
    ```bash
    cd path/to/lab-4
    ```

2.  **Compile the File:**

    (Ensure the program you want to run is **uncommented** in the `.cpp` file.)

    ```bash
    g++ lab\ 4.cpp -o Lab-4
    ```

3.  **Execute the Program:**

    ```bash
    ./Lab-4
    ```

---

## 👤 Author & Contact

* **Author:** Shahzad Ahmed Awan
* **Instructor:** Sir Awais Rathore (First Semester)
* **GitHub:** [https://github.com/Shahzad-Ahmed-Awan](https://github.com/Shahzad-Ahmed-Awan)
* **Email:** [shahzadawan.official15@gmail.com](mailto:shahzadawan.official15@gmail.com)
* **LinkedIn:** [https://www.linkedin.com/in/shahzad-ahmed-awan-a803a9370](https://www.linkedin.com/in/shahzad-ahmed-awan-a803a9370)

⭐️ If you find this repository useful, kindly **star** it!