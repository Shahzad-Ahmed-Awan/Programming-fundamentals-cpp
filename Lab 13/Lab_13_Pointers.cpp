
//***************************************** Program-1***************************

#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an integer variable
    int num = 25;

    // Declare a pointer and store the address of num
    int *ptr = &num;

    // Display the value of num using the pointer
    cout << "Value of num: " << num << endl;
    cout << "Value of num using pointer: " << *ptr << endl;
    cout << "Address stored in pointer: " << ptr << endl;

    return 0;
}



//*************************************  Program 2 *****************************

//#include <iostream>
//using namespace std;
//
//int main() {
//    // Declare and initialize an integer variable
//    int num = 10;
//
//    // Declare a pointer and store the address of num
//    int *ptr = &num;
//
//    // Display the original value of num
//    cout << "Original value of num: " << num << endl;
//
//    // Modify the value of num using the pointer
//    *ptr = 50;
//
//    // Display the modified value of num
//    cout << "Modified value of num using pointer: " << num << endl;
//
//    return 0;
//}


//********************************** Program 3 ***********************************


//#include <iostream>
//using namespace std;
//
//int main() {
//    // Declare and initialize an array
//    int arr[] = {10, 20, 30, 40, 50};
//
//    // Declare a pointer and point it to the first element of the array
//    int *ptr = arr;
//
//    // Get the size of the array
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    // Display array elements using pointer arithmetic
//    cout << "Array elements using pointer arithmetic: " << endl;
//    for (int i = 0; i < size; i++) {
//        cout << "Element " << i + 1 << ": " << *(ptr + i) << endl;
//    }
//
//    return 0;
//}


//********************************** Program 4 ****************************************
//#include <iostream> 
//#include <iomanip>  
//using namespace std; 
// 
//// Function to swap two numbers using pointer
//void swapNumbers(int *ptr1, int *ptr2) { 
//    int temp =*ptr1; 
//    *ptr1 = *ptr2; 
//    *ptr2 = temp; 
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
//    // Calling the swap function 
//swapNumbers(&num1, &num2); 
//cout << "\n==================================" << endl; 
//cout << "|   After Swapping                |" << endl; 
//cout << "===================================" << endl; 
//cout << "| " << setw(8) << "num1" << " | " << setw(8) << "num2" << " |" << endl; 
//cout << "| " << setw(8) << num1 << " | " << setw(8) << num2 << " |" << endl; 
//cout << "----------------------------------" << endl; 
//return 0; 
//}


//************************************************* Program 5***********************************

//#include <iostream>
//using namespace std;
//
//int main() {
//    // Declare and initialize a pointer to nullptr
//    int *ptr = nullptr;
//
//    // Check if the pointer is null
//    if (ptr == nullptr) {
//        cout << "The pointer does not point to any valid memory." << endl;
//    } else {
//        cout << "The pointer holds the address: " << ptr << endl;
//    }
//
//    return 0;
//}

//*************************** Program -6 ************************************************
//
//#include<iostream>
//using namespace std;
//int main(){
//	// void poniter Declaration
//	int var=10;
//	void *ptr;
//	
//	ptr=&var;
//	
//	//typecasting for showing values
//	cout<<"The void Pointer pointing to varaible whose address is: "<<(int*)ptr<<endl;
//	cout<<endl;
//	cout<<"The void Pointer pointing to varaible whose address is: "<<*(int*)ptr<<endl;
//	return 0;
//}
