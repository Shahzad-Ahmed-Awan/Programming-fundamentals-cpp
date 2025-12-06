# 📚 C++ Programming Fundamentals: Semester 1 Tasks

Welcome to the **C++ Programming Fundamentals Repository**! This collection holds all the essential tasks and projects completed during my **first semester** under the instruction of **Sir Awais Rathore**. The focus is on building a robust understanding of core C++ concepts and fundamental problem-solving techniques.

[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://en.cppreference.com/w/)
[![Status](https://img.shields.io/badge/Semester-Completed-success.svg)](https://github.com/your-username/programming-fundamentals)

---

## 📑 Table of Contents

* [✨ Key Concepts Covered](#-key-concepts-covered)
* [📂 **LABS & TASKS LIST**](#-labs--tasks-list)
* [🔍 **LAB-3 TASK DETAILS**](#-lab-3-task-details)
* [💻 Prerequisites & Setup](#-prerequisites--setup)
* [🚀 How to Run the Code](#-how-to-run-the-code)
* [👤 Author & Instructor](#-author--instructor)
* [📬 Contact & Contribution](#-contact--contribution)

---

## ✨ Key Concepts Covered

This repository demonstrates foundational knowledge in:

* **Variables & Data Types:** Declarations, initialization, and type casting (e.g., `int`, `double`).
* **Control Structures:** (To be added in future labs)
* **Loops:** (To be added in future labs)
* **Functions:** (To be added in future labs)
* **Basic I/O:** Reading user input (`cin`), displaying output (`cout`), and using **I/O manipulators** (`iomanip`, `setprecision`).
* **Arithmetic Operators:** Implementation of `+`, `-`, `*`, `/`, and the **modulus** (`%`) operator.
* **Constants:** Using `const` for fixed values (e.g., tax rate).

---

## 📂 LABS & TASKS LIST

This section provides an overview of the programming tasks contained in each file within the repository.

| Task File | Program Name | Concept Focus |
| :---: | :--- | :--- |
| `Lab-3.cpp` | **Program (Squared Distance)** | Basic Mathematical Formula Implementation |
| `Lab-3.cpp` | **Program 1 (Items Purchase List)** | Fixed Values, Subtotal, Sales Tax, Output Formatting |
| `Lab-3.cpp` | **Program 2 (Average of Three Numbers)** | Floating Point Arithmetic, `iomanip` (`setprecision`) |
| `Lab-3.cpp` | **Program 3 (Arithmetic Operators)** | User Input (`cin`), Integer Arithmetic, Modulus Operator |
| `Lab-3.cpp` | **Program 4 (BMI Calculator)** | User Input, Formula Implementation, Floating Point Output |
| `Lab-3.cpp` | **Program 5 (Trip Cost Estimator)** | User Input, Complex Formula Derivation, Variables |

---

## 🔍 LAB-3 TASK DETAILS

The following details the objective, logic, and expected output format for each of the six programs found within `Lab-3.cpp`.

### 1. Program: Squared Distance

| Detail | Description |
| :--- | :--- |
| **Objective** | Calculate the squared Euclidean distance between two fixed points $(x_1, y_1)$ and $(x_2, y_2)$. |
| **Concepts Used** | Variable declaration (`double`), basic arithmetic operations, and fixed value initialization. |
| **Formula** | $d^2 = (x_2 - x_1)^2 + (y_2 - y_1)^2$ |
| **Expected Output** | A single line showing the coordinates and the calculated squared distance. |
| **Sample Output** | `The squared distance between the points (3,4) and (6,8) is: 25` |

### 2. Program 1: Items Purchase List

| Detail | Description |
| :--- | :--- |
| **Objective** | Calculate the subtotal, sales tax (6%), and total cost for five fixed-price items. |
| **Concepts Used** | `const` variable for tax rate, fixed-point arithmetic for currency, and sequentially structured output. |
| **Calculation** | Subtotal $\rightarrow$ Tax $= \text{Subtotal} \times 0.06 \rightarrow \text{Total} = \text{Subtotal} + \text{Tax}$ |
| **Expected Output** | The price of each item, followed by the calculated Subtotal, Sales Tax, and Total, all formatted as currency. |
| **Sample Output** | (Using fixed values) `Subtotal: $63.75`, `Sales Tax (6%): $3.825`, `Total: $67.575` |

### 3. Program 2: Average of Three Numbers

| Detail | Description |
| :--- | :--- |
| **Objective** | Calculate the average of three fixed floating-point numbers and display the result formatted to two decimal places. |
| **Concepts Used** | `double` for precision, use of the `iomanip` library, and the `cout << fixed << setprecision(2)` manipulators. |
| **Calculation** | $\text{Average} = (N_1 + N_2 + N_3) / 3$ |
| **Expected Output** | The average value, formatted to exactly two decimal places. |
| **Sample Output** | `The average of 85.5, 90.75 and 88.25 = 88.17` |

### 4. Program 3: Implementing Arithmetic Operators

| Detail | Description |
| :--- | :--- |
| **Objective** | Take two integer inputs from the user and demonstrate the results of all five basic arithmetic operators. |
| **Concepts Used** | User input using `cin`, integer variables (`int`), and all operators: `+`, `-`, `*`, `/`, and the modulus operator `%`. |
| **Operators** | Addition, Subtraction, Multiplication, Division (Integer Division), and Modulus (Remainder). |
| **Expected Output** | The results of the five operations displayed clearly with the full expression (e.g., `5 + 3 = 8`), including indentation. |
| **Sample Output** | (Input 10 and 3) `... Division: 10 / 3 = 3`, `... Modulus: 10 % 3 = 1` |

### 5. Program 4: BMI Calculator

| Detail | Description |
| :--- | :--- |
| **Objective** | Prompt the user for their weight (kg) and height (m) and calculate their Body Mass Index (BMI). |
| **Concepts Used** | User interaction (`cout` and `cin`), formula implementation, and the use of `double` for fractional results. |
| **Formula** | $\text{BMI} = \text{Weight} / (\text{Height} \times \text{Height})$ |
| **Expected Output** | A prompt for each required input, followed by the final calculated BMI value. |
| **Sample Output** | (Input 70 kg, 1.75 m) `Your BMI is: 22.8571` |

### 6. Program 5: Trip Cost Estimator

| Detail | Description |
| :--- | :--- |
| **Objective** | Estimate the total fuel cost for a trip based on distance, vehicle efficiency, and fuel cost per liter. |
| **Concepts Used** | Multiple user inputs, unit conversion logic, and complex formula derivation. |
| **Calculation** | $\text{Trip Cost} = (\text{Distance} / \text{V\_Efficiency}) \times \text{FuelCost}$ |
| **Expected Output** | A series of prompts for distance, efficiency, and fuel cost, followed by the final cost in Rupees (Rs). |
| **Sample Output** | (Input 100 km, 15 km/L, Rs 250/L) `Total trip cost: Rs 1666.67` |

---

## 💻 Prerequisites & Setup

To compile and run the C++ files in this repository, you will need:

* **C++ Compiler:** A compiler supporting C++ standards (e.g., g++).
* **IDE/Editor (Recommended):** Visual Studio Code (with C++ extensions) or Dev-C++.

### Technologies Used

| Tool/Language | Version/Purpose |
| :--- | :--- |
| `C++` | Core programming language (focus on C++11/14 standards). |
| `g++` | Standard compiler used for execution. |

---

## 🚀 How to Run the Code

1.  **Clone the Repository:**

    ```bash
    git clone [https://github.com/your-username/programming-fundamentals.git](https://github.com/your-username/programming-fundamentals.git)
    cd programming-fundamentals
    ```

2.  **Compile a Specific Task:**

    To compile a file (e.g., `Lab-3.cpp`), run the following command in your terminal:

    ```bash
    g++ Lab-3.cpp -o Lab-3
    ```

3.  **Execute the Program:**

    Run the compiled executable. Remember that you may need to uncomment the specific program you wish to run inside the `.cpp` file.

    ```bash
    ./Lab-3
    ```

---

## 👤 Author & Instructor

* **Author:** Shahzad Ahmed Awan
* **GitHub:** [https://github.com/Shahzad-Ahmed-Awan](https://github.com/Shahzad-Ahmed-Awan)
* **Under Instruction of:** Sir Awais Rathore (First Semester)

---

## 📬 Contact & Contribution

Your feedback and suggestions are welcome!

* **Email:** [shahzadawan.official15@gmail.com](mailto:shahzadawan.official15@gmail.com)
* **LinkedIn:** [https://www.linkedin.com/in/shahzad-ahmed-awan-a803a9370](https://www.linkedin.com/in/shahzad-ahmed-awan-a803a9370)

If you find this repository helpful, please give it a **star** ⭐️!