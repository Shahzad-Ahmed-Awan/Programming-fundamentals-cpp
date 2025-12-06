//**********************Program#01*************//Number Displayer


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int N, i = 1;

	cout << "Enter a number (N): ";
	cin >> N;

	// Header
	cout << "\n---------------------------------" << endl;
	cout << "     Numbers from 1 to " << N << endl;
	cout << "---------------------------------" << endl;

	// |Using While loop to print numbers from 1 to N
	while (i <= N) {
		cout << setw(10) << i << endl;  // Right-aligned formatting
		i++;
	}

	cout << "---------------------------------" << endl;

	return 0;
}



//********************Program#02**************//Table

//#include <iostream> 
//#include <iomanip>  
//using namespace std; 
// 
//int main() { 
//    int num, i = 1; 
//
//    cout << "Enter a number to display its multiplication table: "; 
//    cin >> num; 
// 
//    // Header 
//    cout << "\n---------------------------------" << endl; 
//    cout << "    Multiplication Table of " << num << endl; 
//    cout << "---------------------------------" << endl; 
// 
//    // While loop to generate the table 
//    while (i <= 10) { 
//        cout << setw(5) << num << " x " << setw(2) << i  
//             << " = " << setw(5) << (num * i) << endl; 
//        i++; 
//    } 
// 
//    cout << "---------------------------------" << endl; 
// 
//    return 0; 
//} 


//********************Program#03********************//Number Validation


//#include <iostream> 
//#include <iomanip> 
//using namespace std; 
// 
//int main() { 
//    int num; 
//    while (true) { 
//        cout << "Enter a positive number: "; 
//        cin >> num; 
// 
//        if (num > 0) { 
//            break;  
//        } 
// 
//        // Displaying error message for invalid input 
//        cout << "\n-----------------------------------------------" << endl; 
//        cout << "   Error! Please enter a positive number." << endl; 
//        cout << "-------------------------------------------------\n" << endl; 
//    } 
// 
//    // Displaying valid input 
//    cout << "\n-----------------------------------------------------" << endl; 
//    cout << "   You entered a valid number: " << setw(5) << num << endl; 
//    cout << "-----------------------------------------------------" << endl; 
// 
//    return 0; 
//}




//*******************************Program#04***************


//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main(){
//	
//	int sum=0,i=1;
//	
//	cout<<"============================================="<<endl;
//	cout<<"     Sum of First Five Natural Numbers       "<<endl;
//	cout<<"============================================="<<endl;
//	
//	//Using Loop to caalculate sum
//	while(i<=5){
//		sum+=i;
//		i++;
//	}
//	
//	//Display Result
//	cout<<"\n      The sum is : "<<setw(5)<<sum<<"\n"<<endl;
//	cout<<"============================================="<<endl;
//	
//	return 0;
//}




//**********************Program#05************************

//
//#include <iostream> 
//#include <iomanip>  // For setw 
//using namespace std; 
// 
//int main() { 
//    double balance = 1000.0;  
//    int choice; 
//    double amount; 
// 
//    while (true) { 
//        // Displaying Menu 
//        cout << "\n========================================================" << endl; 
//        cout << "       Simple Banking System     " << endl; 
//        cout << "========================================================" << endl; 
//        cout << "  1. Deposit Money" << endl; 
//        cout << "  2. Withdraw Money" << endl; 
//        cout << "  3. Check Balance" << endl; 
//        cout << "  4. Exit" << endl; 
//        cout << "--------------------------------------------------------" << endl; 
//        cout << "  Enter your choice: "; 
//        cin >> choice; 
//  
//        switch (choice) { 
//            case 1: 
//                cout << "  Enter amount to deposit: $"; 
//                cin >> amount; 
//                if (amount > 0) { 
//                    balance += amount; 
//                    cout << "  Deposit successful! New balance: $"  
//                         << fixed << setprecision(2) << balance << endl; 
//                } else { 
//                    cout << "  Invalid amount! Please enter a positive value.\n"; 
//                } 
//                break; 
// 
//            case 2: 
//                cout << "  Enter amount to withdraw: $"; 
//                cin >> amount; 
//                if (amount > 0 && amount <= balance) { 
//                    balance -= amount; 
//                    cout << "  Withdrawal successful! New balance: $"  
//                         << fixed << setprecision(2) << balance << endl; 
//                } else if (amount > balance) { 
//                    cout << "  Insufficient funds! Current balance: $"  
//                         << fixed << setprecision(2) << balance << endl; 
//                } else { 
//                    cout << "  Invalid amount! Please enter a positive value.\n"; 
//                } 
//                break; 
// 
//            case 3: // Check Balance 
//                cout << "  Current Balance: $"  
//                     << fixed << setprecision(2) << balance << endl; 
//                break; 
// 
//            case 4: 
//                cout << "\n=========================================================" << endl; 
//                cout << "     Thank you for banking with us!" << endl; 
//                cout << "=========================================================\n" << endl; 
//                return 0; 
// 
//            default: 
//                cout << "  Invalid choice! Please enter a number between 1 and 4.\n"; 
//        } 
//    } 
//} 





//*****************************Program#01 using Do while loop //



 
//#include <iostream> 
//#include <iomanip>  
//#include <string>  
//using namespace std; 
// 
//int main() { 
//    string correctPassword = "12345";  
//    string enteredPassword; 
// 
//    cout << "\n=================================" << endl; 
//    cout << "       Secure Login System       " << endl; 
//    cout << "=================================" << endl; 
// 
//    // Password checking using do while loop 
//    do { 
//        cout << "  Enter your password: "; 
//        cin >> enteredPassword; 
// 
//        if (enteredPassword != correctPassword) { 
//            cout << "  Incorrect password! Try again.\n"; 
//            cout << "---------------------------------" << endl; 
//        } 
// 
//    } while (enteredPassword != correctPassword); 
// 
//    // Successful login message 
//    cout << "\n---------------------------------" << endl; 
//    cout << "  Access Granted! Welcome!" << endl; 
//    cout << "---------------------------------\n" << endl; 
// 
//    return 0; 
//} 


//*********************Program # 02 using Do while loop
//
//
//#include <iostream> 
//#include <iomanip> 
//#include <windows.h> 
// 
//using namespace std; 
// 
//// Function to set console text color 
//void setColor(int color) { 
//    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); 
//} 
// 
//int main() { 
//    int choice, subChoice, quantity; 
//    double totalBill = 0.0; 
//    char moreOrders; 
// 
//    do { 
//        // Display Main Menu 
//        setColor(10); 
//        cout << "\n=========================================" << endl; 
//        cout << "       WELCOME TO FOOD HUB                " << endl; 
//        cout << "=========================================" << endl; 
//         
//        setColor(11); 
//        cout << " 1. Breakfast\n 2. Lunch\n 3. Dinner\n 4. Exit\n"; 
//         
//        setColor(10);  
//        cout << "=========================================" << endl; 
//         
//        setColor(15); 
//        cout << "Enter your choice: "; 
//        cin >> choice; 
// 
//        switch (choice) { 
//            case 1:
//                setColor(14); 
//                cout << "\n********** Breakfast Menu **********\n"; 
//                cout << " 1. Anda Paratha (Rs.40)\n 2. Nan Channy (Rs.60)\n"; 
//                cout << " 3. Siri Paye (Rs.150)\n 4. Tea (Rs.15)\n"; 
//                 
//                setColor(15); 
//                cout << "Select an item: "; 
//                cin >> subChoice; 
//                cout << "Enter quantity: "; 
//                cin >> quantity; 
// 
//                switch (subChoice) { 
//                    case 1: totalBill += quantity * 40; break; 
//                    case 2: totalBill += quantity * 60; break; 
//                    case 3: totalBill += quantity * 150; break; 
//                    case 4: totalBill += quantity * 15; break; 
//                    default: cout << "Invalid selection!\n"; 
//                } 
//                break; 
// 
//            case 2: 
//                setColor(14); 
//                cout << "\n********** Lunch Menu **********\n"; 
//                cout << " 1. Chicken Karahi (Rs.1050/KG)\n 2. Mutton Karahi (Rs.1800/KG)\n"; 
//                cout << " 3. Egg Fried Rice (Rs.450/plate)\n 4. BBQ (Rs.1050/dozen)\n"; 
//                 
//                setColor(15); 
//                cout << "Select an item: "; 
//                cin >> subChoice; 
//                cout << "Enter quantity: "; 
//                cin >> quantity; 
// 
//                switch (subChoice) { 
//                    case 1: totalBill += quantity * 1050; break; 
//                    case 2: totalBill += quantity * 1800; break; 
//                    case 3: totalBill += quantity * 450; break; 
//                    case 4: totalBill += quantity * 1050; break; 
//                    default: cout << "Invalid selection!\n"; 
//                } 
//                break; 
// 
//            case 3:
//                setColor(14); 
//                cout << "\n********** Dinner Menu **********\n"; 
//                cout << " 1. Chicken Karahi (Rs.1050/KG)\n 2. Mutton Karahi (Rs.1800/KG)\n"; 
//                cout << " 3. Egg Fried Rice (Rs.450/plate)\n 4. BBQ (Rs.1050/dozen)\n"; 
//                cout << " 5. Saji (Rs.800/KG)\n"; 
//                 
//                setColor(15); 
//                cout << "Select an item: "; 
//                cin >> subChoice; 
//                cout << "Enter quantity: "; 
//                cin >> quantity; 
// 
//                switch (subChoice) { 
//                    case 1: totalBill += quantity * 1050; break; 
//                    case 2: totalBill += quantity * 1800; break; 
//                    case 3: totalBill += quantity * 450; break; 
//                    case 4: totalBill += quantity * 1050; break; 
//                    case 5: totalBill += quantity * 800; break; 
//                    default: cout << "Invalid selection!\n"; 
//                } 
//                break; 
// 
//            case 4: 
//                cout << "Thank you for visiting!\n"; 
//                return 0; 
// 
//            default: 
//                cout << "Invalid choice! Please select a valid option.\n"; 
//        } 
// 
//        // Ask if the user wants to order more 
//        setColor(11); 
//        cout << "\nWould you like to order more? (Y/N): "; 
//        cin >> moreOrders; 
//        setColor(15); 
// 
//    } while (moreOrders == 'Y' || moreOrders == 'y'); 
// 
//        // Showing bill
//    setColor(12);
//    cout << "\n=========================================" << endl; 
//    cout << "               INVOICE                     " << endl; 
//    cout << "=========================================" << endl; 
//    cout << " Total Bill: Rs. " << fixed << setprecision(2) << totalBill << endl; 
//    cout << "=========================================" << endl; 
//    cout << " Thank You for Ordering from FOOD HUB! " << endl; 
//    cout << "=========================================\n" << endl; 
// 
//    return 0; 
//} 

