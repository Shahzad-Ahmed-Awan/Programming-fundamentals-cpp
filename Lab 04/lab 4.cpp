#include<iostream>
#include<iomanip>
using namespace std;
int main() {
////****************PROGRAM-1(Even ODD Calculator)************

	// Declaring variable and showing heading
	int number;
	cout << setfill('=') << setw(50) << "=" << endl;
	cout << setfill(' ') << setw(35) << "THE EVEN ODD CHECKER" << endl;
	cout << setfill('=') << setw(50) << "=" << endl;

	// Taking the number from user
	cout<<"\tEnter any intergers Number : ";
	cin>>number;
	cout << setfill('-') << setw(50) << "-" << endl;
	cout << setfill(' ') << setw(30) << " | THE RESULT |" << endl;
	cout << setfill('-') << setw(50) << "-" << endl;

	//Evaluating the nature and showing on console
	(number%2==0)?cout<<"\tThe number (you entered) "<<number<<" is even\n":
	                  cout<<"\tThe number(you entered) "<<number<<" is odd\n";

	// Good bye
	cout << setfill('=')<< setw(50) << "=" << endl;
	cout << "\t\tThank you for using!" << endl;
	cout << setfill('=') << setw(50) << "=" << endl;
	


////Program-2 (Age Status)
//	// Declaring variable and showing heading
//	int age;
//	cout << setfill('=') << setw(50) << "=" << endl;
//	cout << setfill(' ') << setw(35) << "THE AGE CATEGORY CHECKER" << endl;
//	cout << setfill('=') << setw(50) << "=" << endl;
//	// Taking the age user
//	cout<<"\tEnter your age :";
//	cin>>age;
//	cout << setfill('-') << setw(50) << "-" << endl;
//	cout << setfill(' ') << setw(35) << " | THE CATEGORY RESULT |" << endl;
//	cout << setfill('-') << setw(50) << "-" << endl;
//	//Evaluating the Age Category and showing on console
//	(age<13)?cout<<"\tAge "<<age<<" falls under the category:Child\n":(age>=20)?
//	             cout<<"\tAge "<<age<<" falls under the category Adult\n":
//				 cout<<"\tAge "<<age<<" falls under the category:Teenager\n";
//	// Good bye
//	cout << setfill('=')<< setw(50) << "=" << endl;
//	cout << "\t\tThank you for using!" << endl;
//	cout << setfill('=') << setw(50) << "=" << endl;




	//**********PROGRAM-3 (Banking App)********************

//	// Variables for input
//	double balance;
//	bool Loyal;
//	// Display welcome message
//	cout << setfill('=') << setw(70) << "=" << endl;
//	cout << setfill(' ') << setw(45) << right << "Welcome to the Banking App" << endl;
//	cout << setfill('=') << setw(70) << "=" << endl;
//
//	// Step 1: Input account balance
//	cout << "\tEnter your account balance: ";
//	cin >> balance;
//
//	// Step 2: Input loyalty status
//	cout << "\tEnter loyalty status (1 for Loyal, 0 for Not Loyal): ";
//	cin >> Loyal;
//	// Output separator
//	cout << setfill('=') << setw(70) << "=" << endl;
//
//	// Step 3: Determine account type
//	cout<<setfill(' ')<<setw(50)<<"---| Determining your account type |---" << endl;
//	cout<< setfill('-') << setw(70) << "-" << endl;
//	cout<<setfill(' ')<<setw(30)<<right<<"Your account balance is "
//	<<balance<<"$ So your account type is Below.\n"<<endl;
//	cout << setfill(' ') << setw(30) << left << "\tAccount Type: "
//	     << ((balance < 100) ? "Low Balance Account"
//	         : (balance <= 500) ? "Standard Account": "Premium Account")<< endl;
//
//	// Output separator
//	cout << setfill('=') << setw(70) << "=" << endl;
//
//	// Step 4: Check special offer eligibility
//	cout<<setfill(' ')<<setw(55)<<right<<"---| Checking special offer eligibility |---" << endl;
//	cout<< setfill('-') << setw(70) << "-" << endl;
//	cout<< setfill(' ') << setw(20) << left << "\tSpecial Offer Status: "
//	    << ((balance > 200 && Loyal == 1) ? "Eligible for Special Offer"
//	        : "Not Eligible for Special Offer")<< endl;
//	// Final separator
//	cout << setfill('=') << setw(70) << "=" << endl;

return 0;
}