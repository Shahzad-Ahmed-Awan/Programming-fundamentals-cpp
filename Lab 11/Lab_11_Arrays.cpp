//*******************************************  Program # 01 - Arrays ***********************************************


#include <iostream> 
#include <iomanip>  
using namespace std; 
 
int main() { 
    // Initialize an array of five integers 
    int numbers[5] = {10, 20, 30, 40, 50}; 
 
    // Display a header 
    cout << "Array Elements:" << endl; 
    cout << "----------------" << endl; 
 
    // Traversing using loop
    for (int i = 0; i < 5; i++) { 
        cout << "Element [" << i << "]: " << setw(4) << numbers[i] << endl; 
    } 
 
    return 0; 
}



//*******************************************  Program # 02 - Array Reversing *********************************************** 

 
//#include <iostream> 
//#include <iomanip>  
//using namespace std; 
// 
//int main() { 
//    int arrLength;   
// 
//    cout <<"====================================================="<<endl;
//    cout << "Enter the number of elements in array: "; 
//    cin >> arrLength; 
//    cout <<"====================================================="<<endl;
//    int arr[arrLength];  
// 
//   
//    cout << "\nEnter " <<arrLength<< " integers:\n"; 
//    for (int i = 0; i < arrLength; i++) { 
//        cout << "Element [" << i << "]: "; 
//        cin >> arr[i]; 
//    } 
// 
//    cout << "\nArray in Reverse Order:\n"; 
//    cout << "------------------------\n"; 
//    // Loop Reversing the Array
//    for (int i = arrLength - 1; i >= 0; i--) { 
//        cout << "Element [" << i << "]: " << setw(4) << arr[i] << endl; 
//    } 
//    cout <<"====================================================="<<endl;
//    return 0; 
//} 


//*******************************************  Program # 03 - Arrays Sum and average of Element *********************************************** 

//#include <iostream> 
//#include <iomanip> 
//using namespace std; 
// 
//int main() { 
//    // Initializing an array of integers 
//    int numbers[] = {10, 20, 30, 40, 50}; 
//    
//    // Calculating array size 
//    int size = sizeof(numbers) / sizeof(numbers[0]);  
// 
//    int sum = 0; 
//    double average; 
// 
//    // Calculating sum of elements 
//    for (int i = 0; i < size; i++) { 
//        sum += numbers[i]; 
//    } 
// 
//    // Calculating average 
//    average = static_cast<double>(sum) / size; 
// 
//    // Displaying results 
//    cout << "Array Elements:\n"; 
//    cout << "----------------\n"; 
//    for (int i = 0; i < size; i++) { 
//        cout << "Element [" << i << "]: " << setw(4) << numbers[i] << endl; 
//    } 
// 
//    cout << "\nTotal Sum: " << sum << endl; 
//    cout << "Average:   " << fixed << setprecision(2) << average << endl; 
// 
//    return 0; 
//} 





//*******************************************  Program # 04 - Arrays lenth Calculation *********************************************** 



//#include <iostream> 
//using namespace std; 
// 
//int main() { 
//    // Initializing an array of integers 
//    int numbers[] = {5, 10, 15, 20, 25, 30, 35}; 
// 
//    // Calculating array length 
//    int length = sizeof(numbers) / sizeof(numbers[0]); 
// 
//    // Displaying the result 
//    cout <<"==============================="<<endl;
//    cout << "The array contains " << length << " elements." << endl; 
// 
//    return 0; 
//} 







//*******************************************  Program # 05 - Arrays Largest Element *********************************************** 

//
//
//#include <iostream> 
//using namespace std; 
// 
//int main() { 
//    int N; 
// 
//    // Asking user for the size of the array 
//     cout <<"====================================================="<<endl;
//    cout << "           Enter the number of elements:  "; 
//    cin >> N; 
//     cout <<"====================================================="<<endl;
//    int arr[N]; 
// 
//    // Taking array input 
//    cout << "Enter " << N << " integers:\n"; 
//    for (int i = 0; i < N; i++) { 
//        cout << "Element [" << i << "]: "; 
//        cin >> arr[i]; 
//    } 
// 
//    // Finding the largest number 
//    int max = arr[0]; // letting the first element is the largest 
//    for (int i = 1; i < N; i++) { 
//        if (arr[i] > max) { 
//            max = arr[i]; // Updating max if a larger value is found 
//        } 
//    } 
// 
//    // Displaying the largest number 
//    cout << "\nThe largest number in the array is: " << max << endl; 
//     cout <<"======================================================="<<endl;
//    return 0; 
//}


