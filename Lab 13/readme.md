# 💻 C++ Programming Fundamentals: Lab 13 - Pointers (Memory Management)

This repository file (`Lab_13_Pointers.cpp`) contains tasks completed for Lab 13 of the C++ Programming Fundamentals course, instructed by **Sir Awais Rathore**. The primary focus of this lab is on introducing and manipulating **Pointers**, a powerful C++ feature for direct memory access.

[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://en.cppreference.com/w/)
[![Lab](https://img.shields.io/badge/Lab-13-informational.svg)](https://github.com/your-username/programming-fundamentals)

---

## 📑 Table of Contents

* [✨ Lab Overview](#-lab-overview)
* [🔍 **LAB-13 TASK DETAILS**](#-lab-13-task-details)
* [🚀 How to Run the Code](#-how-to-run-the-code)
* [👤 Author & Contact](#-author--contact)

---

## ✨ Lab Overview

This lab demonstrates how to declare and use pointers to interact directly with memory addresses, enabling powerful techniques like indirect variable manipulation and memory checking.

**Key Concepts Demonstrated:**

* **Pointer Declaration (`*`):** Declaring a variable to hold a memory address.
* **Address-of Operator (`&`):** Retrieving the memory address of a variable.
* **Dereference Operator (`*`):** Accessing or modifying the value stored at a memory address.
* **Pointer Arithmetic:** Manipulating a pointer's address to navigate memory (e.g., in arrays).
* **Null Pointers:** Initializing pointers to `nullptr` for safe memory management.
* **Void Pointers:** A generic pointer that can hold the address of any data type.
* **Pass-by-Pointer:** Implementing **Pass-by-Reference** logic using pointers in functions.

---

## 🔍 LAB-13 TASK DETAILS

This table provides a simple summary of the objective, key concepts, and expected outcome for all six programs/tasks in `Lab_13_Pointers.cpp`.

| Program Name | Objective/Description | Key Concepts | Required Output/Format |
| :--- | :--- | :--- | :--- |
| **Program 1 (Intro to Pointers)** | Declare a variable and a pointer, then display the variable's value and address. | `*` (Dereference), `&` (Address-of) | Displays the **Value** of the variable and the **Address** stored in the pointer. |
| **Program 2 (Value Modification)** | Modify the value of a regular variable solely by using its associated pointer. | `*ptr = newValue;` | Displays the original and the modified value of the variable. |
| **Program 3 (Pointer Arithmetic)** | Demonstrate pointer arithmetic by iterating through a 5-element array using a pointer instead of an index. | **Pointer Arithmetic**, Array Traversal | Displays the value of each element by incrementing the pointer (`ptr++`). |
| **Program 4 (Pass-by-Pointer)** | Implement a function to swap two numbers using their memory addresses (pointers). | **Pass-by-Pointer** (PBP) | Displays the values **before** and **after** the swap function call. |
| **Program 5 (Null Pointer Check)** | Declare a null pointer and check its state using a conditional statement. | **`nullptr`**, Conditional Check | Confirms that the pointer **"does not point to any valid memory."** |
| **Program 6 (Void Pointer)** | Demonstrate the flexibility of a `void*` pointer to store the address of an `int` variable. | **`void*` Pointer**, Explicit casting | Displays the address and the dereferenced value (requires explicit type casting). |

---

## 🚀 How to Run the Code

To compile and execute this lab file, you will need a C++ compiler (e.g., `g++`).

1.  **Navigate to the Directory:**
    ```bash
    cd path/to/lab-13
    ```

2.  **Compile the File:**

    (Ensure the program you want to run is **uncommented** in the `.cpp` file.)

    ```bash
    g++ Lab_13_Pointers.cpp -o Lab-13
    ```

3.  **Execute the Program:**

    ```bash
    ./Lab-13
    ```

---

## 👤 Author & Contact

* **Author:** Shahzad Ahmed Awan
* **Instructor:** Sir Awais Rathore (First Semester)
* **GitHub:** [https://github.com/Shahzad-Ahmed-Awan](https://github.com/Shahzad-Ahmed-Awan)
* **Email:** [shahzadawan.official15@gmail.com](mailto:shahzadawan.official15@gmail.com)
* **LinkedIn:** [https://www.linkedin.com/in/shahzad-ahmed-awan-a803a9370](https://www.linkedin.com/in/shahzad-ahmed-awan-a803a9370)

⭐️ If you find this file useful, kindly **star** it!