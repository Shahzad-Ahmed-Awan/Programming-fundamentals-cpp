# 🚀 My First Semester Mastery: C++ Fundamentals & Practical Application

This repository tracks my foundational journey through **C++ Programming Fundamentals**, instructed by **Sir Awais Rathore**. It is a testament to structured learning, showcasing the sequential mastery of core concepts—from basic operators to complex data management—culminating in a robust Capstone Project.

---

## 📚 The Learning Path: C++ Fundamentals Journey

The core learning sequence is organized into distinct phases, reflecting the progressive complexity of C++ development.

### **The Project Directory Map**

A visual representation of the foundational lab assignments leading up to the final project.

```tree
.
├── 📂 Core_Fundamentals
│   ├── Lab_03_Operators_IO.cpp         # Operators, Variables, cout/cin
│   ├── Lab_04_Ternary_Basic_If.cpp     # Ternary Operator, Simple Conditionals
│   ├── Lab_05_Complex_If_Else.cpp      # Loan/ATM Simulation Logic
│   ├── Lab_07_Nested_Logic.cpp         # Nested If/Else & Logical Operators
│   ├── Lab_08_Switch_Case.cpp          # Multi-way Branching (Converter)
│   ├── Lab_09_While_DoWhile.cpp        # Iteration & Control Flow
│   ├── Lab_10_For_Loops.cpp            # Patterns & Iterative Calculations
│   ├── Lab_11_Arrays.cpp               # Sequential Data Structures
│   ├── Lab_12_Functions_Basic.cpp      # Modularity & Pass-by-Value/Reference
│   ├── Lab_12b_Overloading_Recursion.cpp # Advanced Function Concepts
│   ├── Lab_13_Pointers.cpp             # Direct Memory Access & Reference
│   └── Lab_14_Structs_Data_Aggregation.cpp # Custom Data Types (Basis of Project)
│
└── 🏨 Capstone_Project
    └── Open_Ended_Lab_Hotel_Management_Shahzad_Awan.cpp
```   
---

## 💡 Capstone Project: Comprehensive Hotel Management System

The **Hotel Management System** is the final, open-ended project that integrates all concepts learned. Developed as a console application, it demonstrates robust architecture and practical problem-solving.

### Core Functionality & Architecture

The system offers a secure, segmented interface for **Admin**, **Registered Users**, and **Guests**.

| Feature Module | Key Concepts Demonstrated | System Functions |
| :--- | :--- | :--- |
| **Authentication & Roles** | Role-Based Access Control, `structs`, String Comparison. | `mainMenu()`, `clientMenu()`, `adminMenu()` |
| **Room & Billing** | Array of `structs`, `bool` flags, `time.h` for duration. | `bookRoom()`, `generateBill()` |
| **Food Ordering** | Nested `switch` Statements, Accumulators, `iomanip` formatting. | `orderFood()` |
| **Admin Control** | Monitoring **Sales**, **Occupancy**, and **Booked Rooms** from a dedicated, secure menu. | (Exclusive Admin Menu) |
| **Interface** | Enhanced console aesthetics and responsiveness. | `windows.h`, `conio.h`, `system("cls")` |

### **Key Data Structures (`struct`)**

The system's integrity relies on user-defined data aggregation:
* **`User`**: Holds account credentials, `bookedRoom`, and `totalBill`.
* **`Room`**: Manages inventory details (`price`, `isAvailable`, `bookingTime`).
* **`FoodItem`**: Defines menu details (`name`, `price`, `subCategory`).

### **Default Admin Login**
| Role | Username | Password |
| :--- | :--- | :--- |
| Admin | `admin` | `admin123` |

---

## ⚙️ Technical Setup

This project utilizes Windows-specific libraries and is best compiled in a **Windows environment** (e.g., Visual Studio or MinGW).

### **How to Compile and Run**

1.  **Navigate to the Directory:**
    ```bash
    cd path/to/project-folder
    ```
2.  **Compile the Source:**
    ```bash
    g++ Open_Ended_Lab_Hotel_Management_Shahzad_Awan.cpp -o HotelSystem
    ```
3.  **Execute the Program:**
    ```bash
    ./HotelSystem
    ```

---

## 👤 Author & Contact

| Aspect | Details |
| :--- | :--- |
| **Author** | Shahzad Ahmed Awan |
| **Instructor** | Sir Awais Rathore |
| **GitHub** | https://github.com/Shahzad-Ahmed-Awan |
| **Email** | shahzadawan.official15@gmail.com |
| **LinkedIn** | https://www.linkedin.com/in/shahzad-ahmed-awan-a803a9370 |

⭐️ Thank you for reviewing this demonstration of my first-semester work!