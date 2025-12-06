# 🏨 C++ Console Application: Comprehensive Hotel Management System

This repository contains the source code for the **Hotel Management System**, developed as an open-ended project for the C++ Programming Fundamentals course, instructed by **Sir Awais Rathore**.

This application is a full-featured console system designed to handle user authentication, detailed room bookings, multi-level food ordering, and administrative oversight, demonstrating a strong command of C++ data structures and modular programming principles.

[![C++](https://img.shields.io/badge/Language-C%2B%2B17-blue.svg)](https://en.cppreference.com/w/)
[![Type](https://img.shields.io/badge/Project-Console%20Application-informational.svg)](https://github.com/your-username/programming-fundamentals)

***

## ✨ Project Overview and Features

The system offers a secure, segmented interface for three user types: Registered Users, Guests, and System Administrators.

| Module | Functionality & Scope | Key C++ Concepts |
| :--- | :--- | :--- |
| **Authentication & Roles** | Handles user **Registration** and **Login**. Segregates access into **Guest**, **User**, and **Admin** roles. | `struct`s, String Comparison, Pass-by-Reference |
| **Room Management** | Allows viewing of available rooms, booking, calculating room charges based on duration, and updating room status. | Array of `struct`s, `bool` flags, `time.h` (for duration) |
| **Food & Billing** | Implements a detailed, multi-category food menu. Accumulates food charges and generates a final, itemized **Invoice**. | Nested **`switch`** Statements, Accumulators, `iomanip` for Formatting |
| **Admin Control** | Provides exclusive administrative access to monitor system activity, sales, and room occupancy. | Role-Based Access Control, Dedicated Admin Menu |
| **Console Interface** | Utilizes Windows-specific libraries to create a visually engaging and responsive console experience. | `windows.h`, `conio.h`, `system("cls")`, Color Functions |

***

## ⚙️ Admin Control & Credentials

The system initializes with a default administrative account to access privileged features.

### Exclusive Admin Features

1.  **View All Booked Rooms:** Displays a list of all currently occupied rooms, including the guest's name (if registered).
2.  **View Total Sales:** Provides a running total of all revenue generated from room bookings and food orders.
3.  **View Occupancy Status:** Shows the status (Available/Booked) of all rooms in the inventory.

### Default Admin Login

| Role | Username | Password |
| :--- | :--- | :--- |
| **Admin** | `admin` | `admin123` |

***

## 💻 Technical Architecture

The core of the application relies on **user-defined data structures (`struct`)** for effective data aggregation, and **modular functions** for logic separation.

### Data Structures (`struct`)

| Structure Name | Purpose | Key Data Members |
| :--- | :--- | :--- |
| **`User`** | Holds customer and admin account details. | `username`, `password`, `mobile`, `bookedRoom`, `totalBill` |
| **`Room`** | Manages the hotel room inventory. | `number`, `category` (e.g., Single, Suite), `price`, `isAvailable`, `bookingTime` |
| **`FoodItem`** | Defines the item details for the internal restaurant menu. | `id`, `mealType`, `subCategory`, `name`, `price` |

### Key Functions

The application is built around several functions, many of which use **Pass-by-Reference** to modify the `User` object (`User &user`) and update the total bill and room status across the system.

* `mainMenu()`: Entry point for user authentication.
* `clientMenu()`: Main loop for guests (Book, Order, View Bill).
* `adminMenu()`: Exclusive menu for system monitoring.
* `bookRoom()`: Handles room reservation logic.
* `orderFood()`: Manages the multi-level menu and bill accumulation.
* `generateBill()`: Calculates and displays the final invoice.

***

## 🚀 How to Compile and Run

This project uses Windows-specific libraries (`windows.h` and `conio.h`) for advanced console manipulation. It is best compiled in a Windows environment (e.g., using Visual Studio or MinGW).

1.  **Navigate to the Directory:**
    ```bash
    cd path/to/project-folder
    ```

2.  **Compile the File:**
    Use a C++ compiler to compile the source file.
    ```bash
    g++ Open_Ended_Lab_Hotel_Management_Shahzad_Awan.cpp -o HotelSystem
    ```

3.  **Execute the Program:**
    Run the compiled executable from the command line.
    ```bash
    ./HotelSystem
    ```

***

## 👤 Author & Contact

* **Author:** Shahzad Ahmed Awan
* **Instructor:** Sir Awais Rathore (First Semester)
* **GitHub:** [https://github.com/Shahzad-Ahmed-Awan](https://github.com/Shahzad-Ahmed-Awan)
* **Email:** [shahzadawan.official15@gmail.com](mailto:shahzadawan.official15@gmail.com)
* **LinkedIn:** [https://www.linkedin.com/in/shahzad-ahmed-awan-a803a9370](https://www.linkedin.com/in/shahzad-ahmed-awan-a803a9370)

⭐️ Thank you for reviewing this project!
