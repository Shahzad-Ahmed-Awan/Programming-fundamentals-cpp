//************************************************** Function recusion to calculate sum **************************************


#include <iostream> 
#include <iomanip>  
using namespace std; 
 
// Recursive function to calculate sum of first n natural numbers 
long long sumOfNumbers(int n) { 
    if (n == 0) 
        return 0;  // Base condition
    return n + sumOfNumbers(n - 1);  // Recursive cond
} 
 
int main() { 
    int n; 
 
    // Input the number 
    cout << "Enter a number (n): "; 
    cin >> n; 
 
    // Calculate sum using recursion 
    long long sum = sumOfNumbers(n); 
 
    // Display formatted output 
    cout << "\n==================================" << endl; 
    cout << "| " << setw(12) << "n" << " | " << setw(12) << "Sum (1 to n)" << " |" << endl; 
    cout << "----------------------------------" << endl; 
    cout << "| " << setw(12) << n << " | " << setw(12) << sum << " |" << endl; 
    cout << "===================================" << endl; 
 
    return 0; 
}


//************************************************** Function pass by referfnce to calculate sum **************************************

//#include <iostream> 
//#include <iomanip>  // For setw and setfill 
//using namespace std; 
// 
//// Function to swap two numbers using pass by reference 
//void swapNumbers(int &a, int &b) { 
//    int temp = a; 
//    a = b; 
//    b = temp; 
//} 
// 
//int main() { 
//    int num1, num2; 
//     
//    // Input two numbers 
//    cout << "Enter first number: "; 
//    cin >> num1; 
//    cout << "Enter second number: "; 
//    cin >> num2; 
// 
//    cout << "\n=================================" << endl; 
//    cout << "|   Before Swapping               |" << endl; 
//    cout << "==================================" << endl; 
//    cout << "| " << setw(8) << "num1" << " | " << setw(8) << "num2" << " |" << endl; 
//    cout << "| " << setw(8) << num1 << " | " << setw(8) << num2 << " |" << endl; 
//    cout << "----------------------------------" << endl; 
// 
//    // Call the swap function 
//swapNumbers(num1, num2); 
//cout << "\n==================================" << endl; 
//cout << "|   After Swapping                |" << endl; 
//cout << "===================================" << endl; 
//cout << "| " << setw(8) << "num1" << " | " << setw(8) << "num2" << " |" << endl; 
//cout << "| " << setw(8) << num1 << " | " << setw(8) << num2 << " |" << endl; 
//cout << "----------------------------------" << endl; 
//return 0; 
//}






//************************************************** Function Overloading Calculator **************************************



//#include <iostream> 
//using namespace std; 
//
//// Overloaded Addition Functions 
//int add(int a, int b) { return a + b; } 
//float add(float a, float b) { return a + b; } 
//float add(int a, float b) { return a + b; } 
//float add(float a, int b) { return a + b; } 
//int add(int a, int b, int c) { return a + b + c; } 
//float add(float a, float b, float c) { return a + b + c; } 
//
//// Overloaded Subtraction Functions 
//int subtract(int a, int b) { return a - b; } 
//float subtract(float a, float b) { return a - b; } 
//float subtract(int a, float b) { return a - b; } 
//float subtract(float a, int b) { return a - b; } 
//int subtract(int a, int b, int c) { return a - b - c; } 
//float subtract(float a, float b, float c) { return a - b - c; } 
//
//
//// Overloaded Multiplication Functions 
//int multiply(int a, int b) { return a * b; } 
//float multiply(float a, float b) { return a * b; } 
//float multiply(int a, float b) { return a * b; } 
//float multiply(float a, int b) { return a * b; } 
//int multiply(int a, int b, int c) { return a * b * c; } 
//float multiply(float a, float b, float c) { return a * b * c; } 
//
//
//// Overloaded Division Functions 
//float divide(int a, int b) { return (float)a / b; }  
//float divide(float a, float b) { return a / b; } 
// 
//int main() { 
//    int choice; 
//     
//    do { 
//        cout << "\n===== SIMPLE CALCULATOR =====" << endl; 
//        cout << "1. Addition" << endl; 
//        cout << "2. Subtraction" << endl; 
//        cout << "3. Multiplication" << endl; 
//        cout << "4. Division" << endl; 
//        cout << "5. Exit" << endl; 
//        cout << "Enter your choice: "; 
//        cin >> choice; 
//         
//        if (choice == 5) { 
//            cout << "Exiting calculator. Thank you!" << endl; 
//            break; 
//        } 
// 
//        int x, y, z; 
//        float a, b, c; 
//        int numOperands; 
//         
//        switch (choice) { 
//            case 1: // Addition 
//                cout << "Enter number of operands (2 or 3): "; 
//                cin >> numOperands; 
//                if (numOperands == 2) { 
//                    cout << "Enter two numbers: "; 
//                    cin >> a >> b; 
//                    cout << "Result: " << add(a, b) << endl; 
//                } else if (numOperands == 3) { 
//                    cout << "Enter three numbers: "; 
//                    cin >> a >> b >> c; 
//                    cout << "Result: " << add(a, b, c) << endl; 
//                } else { 
//                    cout << "Invalid number of operands!" << endl; 
//                } 
//                break; 
// 
//            case 2: // Subtraction 
//                cout << "Enter number of operands (2 or 3): "; 
//                cin >> numOperands; 
//                if (numOperands == 2) { 
//                    cout << "Enter two numbers: "; 
//                    cin >> a >> b; 
//                    cout << "Result: " << subtract(a, b) << endl; 
//                } else if (numOperands == 3) { 
//                    cout << "Enter three numbers: "; 
//                    cin >> a >> b >> c; 
//                    cout << "Result: " << subtract(a, b, c) << endl; 
//                } else { 
//                    cout << "Invalid number of operands!" << endl; 
//                } 
//                break; 
// 
//            case 3: // Multiplication 
//                cout << "Enter number of operands (2 or 3): "; 
//                cin >> numOperands; 
//                if (numOperands == 2) { 
//                    cout << "Enter two numbers: "; 
//                    cin >> a >> b; 
//                    cout << "Result: " << multiply(a, b) << endl; 
//                } else if (numOperands == 3) { 
//                    cout << "Enter three numbers: "; 
//                    cin >> a >> b >> c; 
//                    cout << "Result: " << multiply(a, b, c) << endl; 
//                } else { 
//                    cout << "Invalid number of operands!" << endl; 
//                } 
//                break; 
// 
//            case 4: // Division 
//                cout << "Enter two numbers: "; 
//                cin >> a >> b; 
//                if (b == 0) { 
//                    cout << "Error! Division by zero is not allowed." << endl; 
//                } else { 
//                    cout << "Result: " << divide(a, b) << endl; 
//                } 
//                break; 
// 
//            default: 
//                cout << "Invalid choice! Please try again." << endl; 
//        } 
// 
//    } while (true); 
// 
//return 0; 
//}