//******************Program # 01 Using For Loop *************// Printing Number

#include <iostream> 
#include <iomanip> 
 
using namespace std; 
 
int main() { 
    int N; 
 
    cout << "=========================================" << endl; 
    cout << "      Number Printing Program            " << endl; 
    cout << "=========================================" << endl; 
 
    cout << "Enter the value of N: "; 
    cin >> N; 
 
    // Check for valid input 
    if (N <= 0) { 
        cout << "Invalid input! Please enter a positive number.\n"; 
        return 0; 
    } 
    cout << "\n=========================================\n"; 
    cout << "         Numbers from 1 to " << N << "         \n"; 
    cout << "=========================================\n"; 
 
    // Displaying numbers 
    for (int i = 1; i <= N; i++) { 
        cout << setw(4) << i << endl; 
    } 
 
    cout << "\n=========================================\n"; 
 
    return 0; 
} 




//******************Program # 02 Using For Loop *************// Printing Number



//#include <iostream> 
//#include <iomanip> 
// 
//using namespace std; 
// 
//int main() { 
//    int num, limit; 
// 
//    cout << "=========================================" << endl; 
//    cout << "         Multiplication Table            " << endl; 
//    cout << "=========================================" << endl; 
//
//    cout << "Enter a number: "; 
//    cin >> num; 
//    cout << "Enter the limit: "; 
//    cin >> limit; 
// 
//    cout << "\n=========================================" << endl; 
//    cout << "      Multiplication Table of " << num << "       " << endl; 
//    cout << "=========================================\n" << endl; 
// 
//    // Displaying the multiplication table 
//    for (int i = 1; i <= limit; i++) { 
//        cout << setw(4) << num << " * " << setw(2) << i << " = " << setw(4) << (num * i) << endl; 
//    } 
// 
//    cout << "=========================================" << endl; 
// 
//    return 0; 
//}





//******************Program # 03 Using For Loop *************// sum of number


//#include <iostream> 
//#include <iomanip> 
// 
//using namespace std; 
// 
//int main() { 
//    int N, sum = 0; 
// 
//    cout << "=========================================" << endl; 
//    cout << "         Sum of First N Natural Numbers  " << endl; 
//    cout << "=========================================" << endl; 
//
//    cout << "Enter a positive number (N): "; 
//    cin >> N; 
// 
//    // Validating input 
//    if (N <= 0) { 
//        cout << "Invalid input! Please enter a positive number.\n"; 
//        return 0; 
//    } 
// 
//    // Calculating sum using a loop 
//    for (int i = 1; i <= N; i++) { 
//        sum += i; 
//    } 
// 
//    // Displaying output 
//    cout << "\n=========================================" << endl; 
//    cout << "  Sum of first " << setw(2) << N << " natural numbers = " << sum << endl; 
//    cout << "=========================================" << endl; 
// 
//    return 0; 
//}





//******************Program # 04 Using For Loop *************// Printing Patterns

//#include <iostream> 
//using namespace std; 
// 
//int main() { 
//    int rows = 4, cols = 4;  
// 
//    cout << "Pattern No.1: Square of Stars\n\n"; 
//     
//    for (int i = 0; i < rows; i++) {  
//        for (int j = 0; j < cols; j++) {  
//            cout << "* "; 
//        } 
//        cout << endl; 
//    } 
// 
//    return 0; 
//} 



//*************************Pattern 02************************************88


//#include <iostream> 
//using namespace std; 
// 
//int main() { 
//    int rows = 5; 
//    cout << "Pattern No.2: Triangle\n\n"; 
//     
//    for (int i = rows; i >= 1; i--) { 
//        for (int j = 1; j <= i; j++) { 
//            cout << "* "; 
//        } 
//        cout << endl; 
//    } 
// 
//    return 0; 
//} 




//******************Program # 05 Using For Loop *************// 


//#include <iostream> 
//using namespace std; 
// 
//int main() { 
//    int num; 
//   long long factorial = 1; 
//    cout << "\n===================================================" << endl; 
//    cout << "Enter a number to calculate its factorial: "; 
//    cin >> num; 
//    cout << "\n===================================================" << endl; 
//    
//    // Errror of negative numbers 
//    if (num < 0) { 
//        cout << "\n\nFactorial of a negative number is not defined.\n" << endl; 
//    } else { 
//        // Calculating factorial 
//        for (int i = 1; i <= num; i++) { 
//            factorial *= i; 
//        } 
//        // Displaying the result 
//        cout << "\n\nFactorial of " << num << " is: " << factorial << endl; 
//    } 
//   cout << "\n\n===================================================" << endl; 
//    return 0; 
//} 








 



