#include <iostream>
#include <iomanip>
using namespace std;
int main() {

//***Program-1(Positive number Displayer using if)***

//    //Declaring Variable needed
//	int num;
//	cout<<setw(45)<<setfill('=')<<"="<<endl;
//	cout<<"\t\tPOSITIVE NUMBER DISPLAY"<<endl;
//	cout<<setw(45)<<setfill('-')<<"-"<<endl;
//	cout<<"Enter a integer: ";
//	cin>>num;
//	cout<<setw(45)<<setfill('-')<<"-"<<endl;
//
//	//Using if for checking Number
//	if (num>0) {
//		cout<<"The number "<<num<<" is positive."<<endl;
//		cout<<setw(45)<<setfill('=')<<"="<<endl;
//	}




////****Program-2(Even NUMBER DISPLAY)****
//
//	//Declaring Variable needed
//	int num;
//	cout<<setw(45)<<setfill('=')<<"="<<endl;
//	cout<<"\t\tEVEN NUMBER DISPLAYER"<<endl;
//	cout<<setw(45)<<setfill('=')<<"="<<endl;
//	cout<<"Enter a integer: ";
//	cin>>num;
//	cout<<setw(45)<<setfill('-')<<"-"<<endl;
//
//    //Using if for checking number is even?
//	if (num%2==0) {
//		cout<<"The number "<<num<<" is even."<<endl;
//		cout<<setw(45)<<setfill('=')<<"="<<endl;
//	}




////*****Program-3( Largest Number Calculator)*****
//
//    //Declaring Variable & Showing header
//	double num1, num2, num3;
//    cout<<setw(45)<<setfill('=')<<"="<<endl;
//    cout<<"\t\tLARGEST NUMBER CALCULATOR"<<endl;
//    cout<<setw(45)<<setfill('=')<<"="<<endl;
//	cout<<"Enter three numbers: ";
//	cin>>num1>>num2>>num3;
//	cout<<setw(45)<<setfill('-')<<"-"<<endl;
//
//	// Using If Statement for finding  largest Numb
//	if (num1>num2 && num1>num3) {
//		cout<<num1<<" is the largest number."<<endl;
//	}
//
//	if (num2>num1 && num2 >num3) {
//		cout<<num2<<" is the largest number."<< endl;
//	}
//
//	if (num3>num1 && num3>num2) {
//		cout<<num3<<" is the largest number."<<endl;
//	}
//	cout<<setw(45)<<setfill('=')<<"="<<endl;





//******Program-4 (Grade Calucalation)******

//    //Declaring Variable & Showing header
//	int marks;
//	cout<<setw(45)<<setfill('=')<<"="<<endl;
//	cout<<"\t\tGrade CALCULATOR"<<endl;
//	cout<<setw(45)<<setfill('=')<<"="<<endl;
//	cout<<"Enter your marks out of 100: ";
//	cin>>marks;
//	cout<<setw(45)<<setfill('-')<<"-"<<endl;
//
//    //Using if for Grade Calculation
//	if(marks>=90) {
//		cout<<"Your grade is: A+ "<<endl;
//	}
//
//	if(marks>=80 && marks<=89) {
//		cout<<"Your grade is: A "<<endl;
//	}
//
//	if(marks>=70 && marks<=79) {
//		cout<<"Your grade is: B "<<endl;
//	}
//
//	if(marks>=60 && marks<=69) {
//		cout<<"Your grade is: C "<<endl;
//	}
//
//	if(marks<60) {
//		cout<<"You are fail in exam."<<endl;
//	}
//	cout<<setw(45)<<setfill('=')<<"="<<endl;


////*********Pragram-5(Traffic Signal)**********
//    //Decalring Variable & showing header
//	char signalColor;
//	cout<<setw(45)<<setfill('=')<<"="<<endl;
//	cout<<"\t\tTraffic Signal Simulator"<<endl;
//	cout<<setw(45)<<setfill('=')<<"="<<endl;
//	cout<<"Enter Color of Signal: \nR for Red \nG for Green \nY for Yellow"<<endl;
//	cout<<"You enter: ";
//	cin>>signalColor;
//	cout<<setw(45)<<setfill('-')<<"-"<<endl;
//
//    //Using if for Showing Instruction
//	if(signalColor=='R' || signalColor=='r' ) {
//		cout<<"Instruction: Stop"<<endl;
//	}
//
//	if(signalColor=='G' || signalColor=='g' ) {
//		cout<<"Instruction: Go"<<endl;
//	}
//
//	if(signalColor=='Y' || signalColor=='y' ) {
//		cout<<"Instruction: Slow Down"<<endl;
//	}
//	cout<<setw(45)<<setfill('=')<<"="<<endl;




////********* Program 6-PAY ROLE MANAGEMENT using if ********
//	//Constant for basic salaries of Grade
//	const double BASIC_A = 50000.0;
//	const double BASIC_B = 30000.0;
//	const double BASIC_C = 20000.0;
//	// Declaring variables Needed
//	char grade;
//	int service;
//	double basicSalary, bonus, tax, grossSalary, netSalary;
//	// writnig Welcome message
//	cout << setfill('=') << setw(50) << "=" << endl;
//	cout << setfill(' ')<< setw(35) << right<< "Welcome to Payroll System" << endl;
//	cout << setfill('=') << setw(50) << "=" << endl;
//	// Step 1: Taking  employee grade From user
//	cout << "Enter employee grade (A, B, C): ";
//	cin >> grade;
//	// using grade for salary
//	if (grade == 'A' || grade == 'a') {
//		basicSalary = BASIC_A;
//	}
//	if (grade == 'B' || grade == 'b') {
//		basicSalary = BASIC_B;
//	}
//	if (grade == 'C' || grade == 'c') {
//		basicSalary = BASIC_C;
//	}
//	// Step 2: Input years of service
//	cout << "Enter your Total service: ";
//	cin >>service;
//	// Determining bonus according to SERVICE
//	if (service >= 10) {
//		bonus = (basicSalary/100)*10;
//	}
//	if (service >= 5 &&service <= 9) {
//		bonus = (basicSalary/100)*5;
//	}
//	if (service < 5) {
//		bonus = 0.0;
//	}
//	// Calculating gross salary(salary+taxe)
//	grossSalary = basicSalary + bonus;
//	// Calculating tax the tax accd to gross pay
//	if (grossSalary > 40000) {
//		tax = (grossSalary/100)*20;
//	}
//	if (grossSalary >= 30000 && grossSalary <= 40000) {
//		tax = (grossSalary/100)*10;
//	}
//	if (grossSalary < 30000) {
//		tax = 0.0;
//	}
//	//applying Formula net salary
//	netSalary = grossSalary - tax;
//	//Displaying salary slip with setw
//	cout << setfill('-') << setw(50) << "-" << endl;
//	cout << setw(30) <<right<<setfill(' ')<< "Salary Slip" << endl;
//	cout << setfill('-') << setw(50) << "-" << endl;
//	cout << setfill(' ') << setw(30) << left << "Grade: " << grade << endl;
//	cout << setw(30) << left << "Your Service Peroid: " <<service << endl;
//	cout << setw(30) << left << "Basic Salary: " << "$" << basicSalary << endl;
//	cout << setw(30) << left << "Bonus: " << "$" << bonus << endl;
//	cout << setw(30) << left << "Gross Salary: " << "$" << grossSalary << endl;
//	cout << setw(30) << left << "Tax Deduction: " << "$" << tax << endl;
//	cout << setw(30) << left << "Net Salary: " << "$" << netSalary << endl;
//	cout << setfill('=') << setw(50) << "=" << endl;
//



////********************Program-2 IF ELSE Balnce withdrawal*****************
//
////Variable Declaration
//double balance, withdrawal;
//// Welcome Message
//cout << setfill('*') << setw(60) << "*" << endl;
//cout << setfill(' ') << setw(35) << right << " Welcome to ATM Machine" << endl;
//cout << setfill('*') << setw(60) << "*" << endl;
//// Step 1: taking account balance from user
//cout << "Step 1: Enter your account balance: $";
//cin >> balance;
//
//// Step 2: taking amount  to be withdraw
//cout << "Step 2: Enter the withdrawal amount: $";
//cin >> withdrawal;
//
//cout << setfill('-') << setw(60) << "-" << endl;
//// Step 3: Checking withdrawal with balnce
//if (withdrawal <= balance) {
//	balance = balance-withdrawal;
//	cout << setfill(' ') << setw(30) << left << "Transaction Successful!"
//	     << "Remaining Balance: $" << fixed << setprecision(2) << balance << endl;
//} else {
//	cout << setfill(' ') << setw(30) << left << "Insufficient balance." << endl;
//}
//// closing char
//cout << setfill('*') << setw(60) << "*" << endl;
//
//
//
//
//



//************Program 8-Loan Eligibility****************

//    //Variable Declaration
//	double salary;
//	int experience;
//	// Welcome message
//	cout << setfill('*') << setw(60) << "*" << endl;
//	cout << setfill(' ') << setw(45) <<right<< " Welcome to Loan Eligibility Menu" << endl;
//	cout << setfill('*') << setw(60) << "*" << endl;
//	// Step 1: Taking salary and experience from user
//	cout << "Step 1: Enter your monthly salary: $";
//	cin >> salary;
//	cout << "Step 2: Enter your years of work experience: ";
//	cin >> experience;
//	// Output menu
//	cout << setfill('-') << setw(60) << "-" << endl;
//	
//	// Step 2: Checking given conditionwith ifelse
//	if (salary >= 25000 || (experience > 5&&salary>=20000)) {
//		cout << setfill(' ') << setw(30) << left << "Loan Eligibility: "
//		     << "Eligible for loan" << endl;
//	} else {
//		cout << setfill(' ') << setw(30) << left << "Loan Eligibility: "
//		     << "Not eligible for loan" << endl;
//	}
//	cout << setfill('-') << setw(60) << "-" << endl;
//	cout << setfill(' ') << setw(35) <<right << "Thank you for using us" << endl;
//	// Final strip
//	cout << setfill('*') << setw(60) << "*" << endl;

	return 0;
}
