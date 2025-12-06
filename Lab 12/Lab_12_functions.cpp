//*********************************************  Function- Welcome Message ********************************************

#include <iostream> 
using namespace std; 
 
// Function to display a welcome message 
void displayMessage() { 
    cout << "Hello, Welcome to C++ Functions!" << endl; 
} 
 
int main() { 
    // Calling the function 
    displayMessage(); 
     
    return 0; 
}


//*********************************************  Function- Even Odd check ******************************************** 


//#include <iostream> 
//using namespace std; 
// 
//// Function  defination to check if a number is even or odd 
//void checkEvenOdd(int num) { 
//    if (num % 2 == 0) 
//        cout << num << " is Even." << endl; 
//    else 
//        cout << num << " is Odd." << endl; 
//} 
// 
//int main() { 
//    int number; 
// 
//    // Taking input from the user 
//      cout<<"============================================"<<endl;
//      cout<<"              Even Odd  Checker"             <<endl;
//    cout<<"============================================"<<endl;
//    cout << "             Enter a number: "; 
//    cin >> number; 
//     cout<<"-------------------------------------------\n\n"<<endl;
//    // Calling function 
//    checkEvenOdd(number); 
//    cout<<"\n\n============================================"<<endl;
//    return 0; 
//} 




//*********************************************  Function- factorial Calculator  ******************************************** 

//#include <iostream> 
//using namespace std; 
// 
//// Function defination to calculate factorial using a loop 
//long long factorial(int num) { 
//    long long fact = 1; 
// 
//    for (int i = 1; i <= num; i++) { 
//        fact *= i; // Multiply numbers from 1 to num 
//    } 
// 
//    return fact; 
//} 
// 
//int main() { 
//    int number; 
//    cout<<"============================================"<<endl;
//    cout<<"             Factorial Calculator"             <<endl;
//    cout<<"============================================"<<endl;
//    // Taking input from the user 
//    cout << "Enter a number: "; 
//    cin >> number; 
//    cout<<"--------------------------------------------"<<endl;
//    // Handling negative input 
//    if (number < 0) { 
//        cout << "\nnFactorial of a negative number dont exist." << endl; 
//    } else { 
//        // Calling the factorial function and displaying the result 
//        cout << "\nnFactorial of " << number << " is " << factorial(number) << endl; 
//    } 
//    cout<<"\n\n============================================"<<endl;
//    return 0; 
//}




//*********************************************  Function- Menu Driven Calculator  ******************************************** 


//#include <iostream> 
//#include <iomanip>
//using namespace std; 
// 
//// Function to display the menu 
//void showMenu() { 
//    cout << "\n======================================" << endl; 
//    cout << setw(15) << "Simple Calculator" << endl; 
//    cout << "======================================" << endl; 
//    cout << "1. Addition (+)" << endl; 
//    cout << "2. Subtraction (-)" << endl; 
//    cout << "3. Multiplication (*)" << endl; 
//    cout << "4. Division (/)" << endl; 
//    cout << "5. Exit" << endl; 
//    cout << "======================================" << endl; 
//} 
// 
//// Function for addition 
//double add(double a, double b) { 
//    return a + b; 
//} 
// 
//// Function for subtraction 
//double subtract(double a, double b) { 
//    return a - b; 
//} 
// 
//// Function for multiplication 
//double multiply(double a, double b) { 
//    return a * b; 
//} 
// 
//// Function for division 
//double divide(double a, double b) { 
//    if (b == 0) { 
//        cout << "Error! Division by zero is not allowed." << endl; 
//        return 0; 
//    } 
//    return a / b; 
//} 
// 
//int main() { 
//    int choice; 
//    double num1, num2, result; 
// 
//    do { 
//        showMenu(); // Display menu using function 
//        cout << "Enter your choice (1-5): "; 
//        cin >> choice; 
// 
//        if (choice >= 1 && choice <= 4) { 
//            // Input two numbers 
//            cout << "Enter first number: "; 
//            cin >> num1; 
//            cout << "Enter second number: "; 
//            cin >> num2; 
// 
//            // Perform the selected operation 
//            switch (choice) { 
//                case 1: 
//                    result = add(num1, num2); 
//                    cout << "Result: " << num1 << " + " << num2 << " = " << result << endl; 
//                    break; 
//                case 2: 
//                    result = subtract(num1, num2); 
//                    cout << "Result: " << num1 << " - " << num2 << " = " << result << endl; 
//                    break; 
//                case 3: 
//                    result = multiply(num1, num2); 
//                    cout << "Result: " << num1 << " * " << num2 << " = " << result << endl; 
//                    break; 
//                case 4: 
//                    result = divide(num1, num2); 
//                    if (num2 != 0) 
//                        cout << "Result: " << num1 << " / " << num2 << " = " << result << endl; 
//                    break; 
//            } 
//        }  
//        else if (choice == 5) { 
//            cout << "Exiting Calculator... Thank you!" << endl; 
//        }  
//        else { 
//            cout << "Invalid choice! Please select a valid option (1-5)." << endl; 
//        } 
//    } while (choice != 5); // Loop until user chooses to exit 
// 
//    return 0; 
//}








//*********************************************  Function-   ******************************************** 



//#include <iostream> 
//#include <iomanip>    
//#include <windows.h>  
//#include <ctime>      
// 
//using namespace std; 
// 
//// Function to set console text color 
//void setColor(int color) { 
//    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); 
//} 
// 
//// Function to display the menu 
//void displayMenu() { 
//    setColor(14); // Yellow for the header 
//    cout << "\n=========================================" << endl; 
//    cout << setw(20) << "Restaurant Menu " << endl; 
//    cout << "=========================================" << endl; 
// 
//    setColor(10); // Green for menu items 
//    cout << "1. Burger        - $5.00" << endl; 
//    cout << "2. Pizza         - $8.50" << endl; 
//    cout << "3. Pasta         - $7.00" << endl; 
//    cout << "4. Sandwich      - $4.50" << endl; 
//    cout << "5. Coffee        - $3.00" << endl; 
// 
//    setColor(12); 
//    cout << "6. Exit & Generate Bill" << endl; 
// 
//    setColor(14); 
//    cout << "=========================================" << endl; 
//} 
// 
//// Function to calculate item cost 
//double calculateItemCost(int item, int quantity) { 
//    double price = 0; 
//    switch (item) { 
//        case 1: price = 5.00; break; 
//        case 2: price = 8.50; break; 
//        case 3: price = 7.00; break; 
//        case 4: price = 4.50; break; 
//        case 5: price = 3.00; break; 
//    } 
//    return price * quantity; 
//} 
// 
//// Function to calculate tax and discount 
//double calculateFinalBill(double subtotal, double &tax, double &discount) { 
//    // Tax conditions 
//    if (subtotal >= 30) 
//        tax = subtotal * 0.10; // 10% tax 
//    else 
//        tax = subtotal * 0.05; // 5% tax 
// 
//    // Discount condition (if order exceeds $50) 
//    if (subtotal > 50) 
//        discount = subtotal * 0.10; // 10% discount 
//    else 
//        discount = 0; 
// 
//    return subtotal + tax - discount; 
//} 
// 
//// Function to display the current date and time 
//void displayTime() { 
//    time_t now = time(0); 
//    tm *ltm = localtime(&now); 
// 
//    setColor(11); 
//    cout << "Bill Generated on: " << 1900 + ltm->tm_year << "-" 
//         << 1 + ltm->tm_mon << "-" 
//         << ltm->tm_mday << " " 
//         << ltm->tm_hour << ":" 
//         << ltm->tm_min << ":" 
//         << ltm->tm_sec << endl; 
//    setColor(7); 
//} 
// 
//int main() { 
//    int choice, quantity; 
//    double totalBill = 0, itemCost, tax = 0, discount = 0; 
// 
//    do { 
//        displayMenu(); 
//        setColor(11); 
//        cout << "Enter item number (1-5) or 6 to exit: "; 
//        cin >> choice; 
// 
//        if (choice >= 1 && choice <= 5) { 
//            cout << "Enter quantity: "; 
//            cin >> quantity; 
// 
//            // Calculate item cost 
//            itemCost = calculateItemCost(choice, quantity); 
//            totalBill += itemCost; 
// 
//            setColor(10); 
//            cout << " Item added! Cost: $" << fixed << setprecision(2) << itemCost << endl; 
//        }  
//        else if (choice != 6) { 
//            setColor(12); 
//            cout << "Invalid choice! Please select a valid option." << endl; 
//        } 
// 
//    } while (choice != 6); // Exit when user selects 6 
// 
//    // Final bill calculation 
//    double finalAmount = calculateFinalBill(totalBill, tax, discount); 
// 
//    // Bill summary 
//    setColor(14); // Yellow for bill header 
//    cout << "\n================== BILL SUMMARY ==================" << endl; 
//     
//    setColor(7); 
//    displayTime(); 
// 
//    cout << "Subtotal: $" << fixed << setprecision(2) << totalBill << endl; 
// 
//    setColor(12); 
//    cout << "Tax Applied: $" << fixed << setprecision(2) << tax << endl; 
// 
//    setColor(10);
//    cout << "Discount Applied: -$" << fixed << setprecision(2) << discount << endl; 
// 
//    setColor(11);
//    cout << "Final Amount (after tax/discounts): $" << finalAmount << endl; 
// 
//    setColor(14); 
//    cout << "==================================================" << endl; 
//    cout << "Thank you for dining with us! Have a great day! " << endl; 
// 
//    setColor(7); 
//    return 0; 
//} 







