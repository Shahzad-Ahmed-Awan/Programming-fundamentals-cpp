#include <iostream>
#include <iomanip>

using namespace std;
int main() {
//	Number Status CHECKER
	int num;
	cout<<setw(45)<<setfill('=')<<"="<<endl;
	cout<<"Number Status Checker"<<endl;
	cout<<setw(45)<<setfill('=')<<"="<<endl;
	cout<<"Enter Any Intergers: ";
	cin>>num;
	if(num>0)
	{
		cout<<"\nThe number You Enter"<<"("<<num<<")"<< "is Positive"<<endl;
	}
	else if(num<0){
	cout<<"\nThe number You Enter"<<"("<<num<<")"<<"is Negative"<<endl;
	}
	else
	{
		cout<<"\nThe number You Enter"<<"("<<num<<")"<<"is Zero"<<endl;
	}

	cout<<setw(45)<<setfill('=')<<"="<<endl;



//	//program-2(Activity Suggester according to temperature)

//	//Declaring varaible and showing header
//	int temperature;
//	cout<<setw(55)<<setfill('=')<<"="<<endl;
//	cout<<setw(45)<<setfill(' ')<<"THE WHEATHER ACTIVITY SUGGESTER"<<endl;
//	cout<<setw(55)<<setfill('=')<<"="<<endl;
//	//Inputing Temperature
//	cout<<"Kindly Enter Your Temperature For Suggestion:";
//	cin>>temperature;
//	cout<<setw(55)<<setfill('-')<<"-"<<endl;
//	//Using If else for decision & showing output
//	if(temperature>=40) {
//		cout<<"\nWheather is Extremely hot and it be dangerous.\nKindly Stay Indoor\n"<<endl;
//	} else if(temperature>=30&&temperature<=39) {
//		cout<<"\nThe whether is hot Drink alot of water to stay hydarated\n"<<endl;
//	} else if(temperature>=20&&temperature<=29) {
//		cout<<"The whether is pleasant and Ideal for Outdoor Activities."<<endl;
//	} else {
//		cout<<"\nYou are suggested to wear warm Clothes to be Comfortable and healthy\n"<<endl;
//	}
//	cout<<setw(55)<<setfill('=')<<"="<<endl;


	//program-3(login sytem)
//
//      // Predefining correct value for login
//		string correctUsername = "admin";
//		string correctPassword = "12345";
//       // Declaring variables for user input
//		string username, password;
//       // Displaying header for the login system
//		cout << setfill('=') << setw(40) << "" << endl;
//		cout << setfill(' ') << setw(25) << "Login System" << endl;
//		cout << setfill('=') << setw(40) << "" << endl;
//       // Inputing username and password
// 		cout << setfill(' ') << setw(20) << "Enter Username: ";
//		cin >> username;
//		cout << setw(20) << "Enter Password: ";
//		cin >> password;
//       // Checking info using if-else if with logical operators
//		if (username == correctUsername && password == correctPassword) {
//			cout << setfill('=') << setw(40) << "" << endl;
//			cout << setw(30)<<setfill(' ')<< "Access Granted.\n" << endl;
//		} else if (username == correctUsername && password != correctPassword) {
//			cout << setfill('=') << setw(40) << "" << endl;
//			cout << setw(30)<<setfill(' ')<< "Wrong Password.\n" << endl;
//		} else {
//			cout << setfill('=') << setw(40) << "" << endl;
//			cout << setw(30) << setfill(' ')<< "User Not Found.\n" << endl;
//		}
//        // Footer for the login system
//		cout << setfill('=') << setw(40) << "" << endl;


//	//Program-4(Result and Scholarship menu)
//
//	//Declaring Varaible & Character
//	double mark1,mark2,mark3,total_marks,perc;
//	char grade,grade1,grade2,grade3;
//	//showing header with formatting
//	cout<<setw(65)<<setfill('=')<<"="<<endl;
//	cout<<setw(45)<<setfill(' ')<<"Result And Scholarship Menu"<<endl;
//	cout<<setw(65)<<setfill('=')<<"="<<endl;
//	//inputing marks from user
//	cout<<"Enter Your marks in English: ";
//	cin>>mark1;
//	cout<<"\nEnter Your marks in Math: ";
//	cin>>mark2;
//	cout<<"\nEnter Your marks in Physics: ";
//	cin>>mark3;
//	//calculating Total marks & Percentage
//	total_marks=mark1+mark2+mark3;
//	perc=(total_marks/300)*100;
//
//	//CALCULATING GRADE FOR EACH SUBJECT
//
//	//Subject-1
//	if (mark1>=90) {
//		grade1='A';
//	} else if(mark1>=80 && mark1<90) {
//		grade1='B';
//	} else if(mark1>=70&& mark1<80) {
//		grade1='C';
//	} else if(mark1>=60 && mark1<70 ) {
//		grade1='D';
//	} else {
//		grade1='F';
//	}
//
//	//Subject-2
//	if (mark2>=90) {
//		grade2='A';
//	} else if(mark2>=80 && mark2<90) {
//		grade2='B';
//	} else if(mark2>=70&& mark2<80) {
//		grade2='C';
//	} else if(mark2>=60 && mark2<70 ) {
//		grade2='D';
//	} else {
//		grade2='F';
//	}
//
//	//Subject-3
//	if (mark3>=90) {
//		grade3='A';
//	} else if(mark3>=80 && mark3<90) {
//		grade3='B';
//	} else if(mark3>=70&& mark3<80) {
//		grade3='C';
//	} else if(mark3>=60 && mark3<70 ) {
//		grade3='D';
//	} else {
//		grade3='F';
//	}
//
//	//showing output with formatting
//	cout<<setw(65)<<setfill('=')<<"="<<endl;
//	cout<<"Your Grade in English: "<<grade1<<endl;
//	cout<<setw(65)<<setfill('-')<<"-"<<endl;
//	cout<<"Your Grade in Math: "<<grade2<<endl;
//	cout<<setw(65)<<setfill('-')<<"-"<<endl;
//	cout<<"Your Grade in Physics: "<<grade3<<endl;
//	cout<<setw(65)<<setfill('-')<<"-"<<endl;
//	cout<<"Your Total Marks are: "<<total_marks<<"/300"<<endl;
//	cout<<setw(65)<<setfill('-')<<"-"<<endl;
//	cout<<fixed<<setprecision(2)<<"Your Total percenatge: "<<perc<<endl;
//	cout<<setw(65)<<setfill('-')<<"-"<<endl;
//
//	//Checking eligbilty for Scholarship
//	if(grade1=='F' || grade2=='F'||grade3=='F') {
//		cout<<"Your are Fail."<<endl;
//	} else if(total_marks>=270 && (grade1=='A' && grade2=='A'&& grade3=='A')) {
//		cout<<"Your are Eligible for Merit Socalarship"<<endl;
//	} else if (total_marks>=240 && ((grade1=='B'||grade1=='A') && (grade2=='B'||grade2=='A') && (grade3=='B'||grade3=='A'))) {
//		cout<<"Your are Eligible for Regular Socalarship"<<endl;
//	} else {
//		cout<<"Your are not Eligible for Socalarship"<<endl;
//
//	}
//	cout<<setw(65)<<setfill('=')<<"="<<endl;



//	// Program-5(Loan Eligibilty using Nested if)
//	// Variables for age and income
//	int age;
//	double income;
//	// showing Header for the menu
//	cout << setfill('=') << setw(60) << "" << endl;
//	cout << setfill(' ') << setw(40) << "Loan Eligibility Checker" << endl;
//	cout << setfill('=') << setw(60) << "" << endl;
//	// Input for age and income
//	cout <<setfill(' ') << setw(20) << "Enter your age: ";
//	cin >> age;
//	cout <<setfill(' ') <<right<<setw(24) << "Enter your income: $";
//	cin >> income;
//	// Checking loan eligibility using nested if
//	if (age >= 18) {
//		if (income >= 30000) {
//			cout << setfill('=') << setw(60) << "" << endl;
//			cout << setw(35) << "\nCongratulations! You are eligible for a loan.\n" << endl;
//		} else {
//			cout << setfill('=') << setw(60) << "" << endl;
//			cout << setw(35) << "\nYou meet the age requirement but are not eligible\n";
//			cout << setw(35) << "for a loan because your income is below $30,000.\n" << endl;
//		}
//	} else {
//		cout << setfill('=') << setw(60) << "" << endl;
//		cout << setw(35)<<setfill(' ') << "\nYou are not eligible for a loan because you are\n";
//		cout << setw(35)<<setfill(' ') << "under 18 years of age.\n" << endl;
//	}
//	cout << setfill('=') << setw(60) << "" << endl;



//	//Program-6(Role Based Access System)
//
//	// Declaring predefined username and password
//	string username = "shahzad";
//	string password = "password123";
//	// Declaring variables for user input
//	string enteredUsername, enteredPassword, role;
//	// taking Input username and password from user
//	cout << setfill('=') << setw(60) << "" << endl;
//	cout << setfill(' ') << setw(35) << "Role Based Access Menu"<<endl;
//	cout << setfill('=') << setw(60) << "" << endl;
//	cout << setfill(' ') << setw(20) << "Enter Username: ";
//	cin >> enteredUsername;
//	cout << setw(20) << "Enter Password: ";
//	cin >> enteredPassword;
//	// Checking Login info
//	if (enteredUsername == "shahzad") {
//		if (enteredPassword == "password123") {
//			cout << setfill('=') << setw(60) << "" << endl;
//			cout << setw(30) <<setfill(' ')<< "Authentication Successful!" << endl;
//			// Role-Based Access Control
//			cout << setfill('-') << setw(60) << "" << endl;
//			cout << setw(20) <<setfill(' ')<< "Enter Role: ";
//			cin >> role;
//			if (role == "Admin"||role=="admin") {
//				cout << setw(35) <<setfill(' ')<< "Full Access" << endl;
//			} else if (role == "Guest"|| role=="guest") {
//				cout << setw(35) <<setfill(' ')<< "Limited Access" << endl;
//			} else {
//				cout << setw(35)<<setfill(' ') << "No Access" << endl;
//			}
//		} else {
//			cout << setfill('=') << setw(60) << "" << endl;
//			cout << setw(35)<<setfill(' ') << "Authentication Failed. Access Denied." << endl;
//		}
//	} else {
//		cout << setfill('=') << setw(60) << "" << endl;
//		cout << setw(35) <<setfill(' ')<< "Authentication Failed. Access Denied." << endl;
//	}
//	cout << setfill('=') << setw(60) << "" << endl;
//
//
	return 0;
}