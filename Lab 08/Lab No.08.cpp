#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	//**************************************** Program-1 ************************************************************
	int Day_num;
	cout<<"Enter Day Number(1-7): ";
	cin>>Day_num;
	switch(Day_num){
		case 1:
			cout<<"\nToday is Monday"<<endl;
			break;
		case 2:
			cout<<"\nToday is Tuesday"<<endl;
			break;
		case 3:
			cout<<"\nToday is Wednesday"<<endl;
			break;
		case 4:
			cout<<"\nToady is Thursday"<<endl;
			break;
		case 5:
			cout<<"\nToday is Friday"<<endl;
			break;
		case 6:
			cout<<"\nToday is Satursday"<<endl;
			break;
		case 7:
			cout<<"\nToday is Sunday"<<endl;
		default:
			cout<<"Error! Please Enter number from 1-7"<<endl;
			break;
	}

//        //************************************** Program-2 *******************************************************
//        // Showing Header
//        cout<<setw(65)<<setfill('=')<<"="<<endl;
//        cout<<"OPERATOR CHOOSE MENU"<<endl;
//        cout<<setw(65)<<setfill('=')<<"="<<endl;
//        //Declaring and inputing VAriables
//        int num1,num2;char operat;
//        cout<<"Enter Two Numbers: ";
//        cin>>num1>>num2;
//        cout<<"Choose from (-, +,*,/ and %): ";
//        cin>>operat;
//        cout<<setw(65)<<setfill('-')<<"-"<<endl;
//        //Apply switch for Operations
//        switch(operat){
//        	case '+':
//        		cout<<"Result "<<num1<<" + "<<num2<<" is "<<num1+num2<<endl;
//        		break;
//        	case '-':
//        		cout<<"Result "<<num1<<" - "<<num2<<" is "<<num1-num2<<endl;
//        		break;
//        	case '*':
//        		cout<<"Result "<<num1<<" * "<<num2<<" is "<<num1*num2<<endl;
//        		break;
//        	case '/':
//        		cout<<"Result "<<num1<<" / "<<num2<<" is "<<num1/num2<<endl;
//        		break;
//        	case '%':
//        		cout<<"Result "<<num1<<" % "<<num2<<" is "<<num1%num2<<endl;
//        		break;
//        	default :
//        		cout<<"Please choose from given operator"<<endl;
//        		break;
//		}
//		cout<<setw(65)<<setfill('=')<<"="<<endl;


//*************************************************  Program No.3 ************************************************
//	const float PI=3.14159;
//	int choice;
//	float radius, length, width, base, height, area;
//	cout<<setw(65)<<setfill('=')<<"="<<endl;
//	cout << "Shape Area Calculator" << endl;
//	cout<<setw(65)<<setfill('=')<<"="<<endl;
//	cout << "1. Circle" << endl;
//	cout << "2. Rectangle" << endl;
//	cout << "3. Triangle" << endl;
//	cout << "Enter your choice (1, 2, or 3): ";
//	cin >> choice;
//	cout<<setw(65)<<setfill('-')<<"-"<<endl;
//
//	switch (choice) {
//		case 1:
//			cout << "Enter the radius of the circle: ";
//			cin >> radius;
//			area = PI * radius * radius;
//			cout << "The area of the circle is: " << area << endl;
//			break;
//		case 2:
//			cout << "Enter the length of the rectangle: ";
//			cin >> length;
//			cout << "Enter the width of the rectangle: ";
//			cin >> width;
//			area = length * width;
//			cout << "The area of the rectangle is: " << area << endl;
//			break;
//		case 3:
//			cout << "Enter the base of the triangle: ";
//			cin >> base;
//			cout << "Enter the height of the triangle: ";
//			cin >> height;
//			area = 0.5 * base * height;
//			cout << "The area of the triangle is: " << area << endl;
//			break;
//		default:
//			cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
//			break;
//	}
//	cout<<setw(65)<<setfill('=')<<"="<<endl;



//******************************************* Program-4 *****************************************************
//		//Needed Variable Declaration
//		char item;
//		int category,quantity;
//		double discount,total,grand_total,price;
//		//Showing Header
//		cout<<setw(65)<<setfill('=')<<"="<<endl;
//		cout<<"Welcome to the Shopping Menu"<<endl;
//		cout<<setw(65)<<setfill('=')<<"="<<endl;
//		//Main Menu Prompt
//		cout<<"Please Enter Your Category:\n 1 for \telectronics\n 2 for \tClothing\n 3 for\tGroceries "<<endl;
//		cin>>category;
//		cout<<setw(65)<<setfill('*')<<"*"<<endl;
//		//Switch for Sub Menus
//		switch(category){
//
//			case 1:
//				cout<<"Welcome to Electronics Menu."<<endl;
//				cout<<setw(65)<<setfill('-')<<"-"<<endl;
//				cout<<"Enter Item to Buy:"<<endl;
//				cout<<" L for \tLaptops\n S for \tSmartphone\n H for \tHeadphone."<<endl;
//				cin>>item;
//				switch(item){
//					case 'L':
//					case 'l':
//						price=1000;
//						break;
//					case 'S':
//					case 's':
//						price=700;
//						break;
//					case 'H':
//					case 'h':
//						price=150;
//						break;
//				}
//				break;
//			case 2:
//				cout<<"Welcome to Clothing Menu."<<endl;
//				cout<<setw(65)<<setfill('-')<<"-"<<endl;
//				cout<<"Enter Item t  o Buy:"<<endl;
//				cout<<" J for \tJacket\n T for \tT-Shirt\n P for \tjeans."<<endl;
//				cin>>item;
//				switch(item){
//					case 'J':
//					case 'j':
//						price=120;
//						break;
//					case 'T':
//					case 't':
//						price=40;
//						break;
//					case 'P':
//					case 'p':
//						price=60;
//						break;
//				}
//				break;
//			case 3:
//				cout<<"Welcome to Groceries Menu."<<endl;
//				cout<<setw(65)<<setfill('-')<<"-"<<endl;
//				cout<<"Enter Item to Buy:"<<endl;
//				cout<<" M for \tMilk(Litre)\n B for \tBread(Loaf)\n E for \tEggs(Dozen)."<<endl;
//				cin>>item;
//				switch(item)
//				{
//					case 'M':
//					case 'm':
//						price=2;
//						break;
//					case 'B':
//					case 'b':
//						price=3;
//						break;
//					case 'E':
//					case 'e':
//						price=5;
//						break;
//				}
//
//		}
//		//Taking the quantity of choosen items
//		cout<<"Enter the quantity of item: ";
//		cin>>quantity;
//		total=price*quantity;
//		//Calculating the Discount on total
//		if(total>500){
//					discount= total*0.2;
//				}
//				else if(total>=100&&total<=500){
//					discount=total*0.1;
//				}
//				else{
//						discount=0.0;
//				}
//		//Calulating Final Total
//		grand_total=total-discount;
//		//Showing Output on Console
//		cout<<setw(65)<<setfill('=')<<"="<<endl;
//		cout<<"Your Total:\t"<<total<<endl;
//		cout<<setw(65)<<setfill('-')<<"-"<<endl;
//		cout<<"Discount Given:\t"<<discount<<endl;
//		cout<<setw(65)<<setfill('-')<<"-"<<endl;
//		cout<<"Grand total After Discount:\t"<<grand_total<<endl;
//		cout<<setw(65)<<setfill('=')<<"="<<endl;
//
//

////
    //*************************************** program-5 **********************************************
    
//	            double usd,convert;int curen_num;
//	            cout<<setw(65)<<setfill('=')<<"="<<endl;
//	            cout<<"THE CURRENCY CONVERTOR"<<endl;
//	            cout<<setw(65)<<setfill('=')<<"="<<endl;
//	            cout<<"Enter The amount in usd :";
//	            cin>>usd;
//	            cout<<"Enter the Currency You want to convert to :"<<endl;
//	            cout<<setw(65)<<setfill('-')<<"-"<<endl;
//	            cout<<"1 for\tEURO\n2 for\tPKR\n3 for\tINR"<<endl;
//	            cout<<"You Entered : ";
//	            cin>>curen_num;
//	            cout<<setw(65)<<setfill('-')<<"-"<<endl;
//	            switch(curen_num){
//	            	case 1:
//	            		convert=0.92*usd;
//	            		cout<<"The Converted Amount in Euros is:  E "<<convert<<endl;
//	            		break;
//	            	case 2:
//	            		convert=280*usd;
//	            		cout<<"The Converted Amount in PKR is:  PKR "<<convert<<endl;
//	            		break;
//	            	case 3:
//	            	    convert=83*usd;
//	            	    cout<<"The converted amount  in INR is:  INR "<<convert<<endl;
//	            	    break;
//	            	default:
//	            		cout<<"Choose from given Currency"<<endl;
//	            		break;
//				}
//			    cout<<setw(65)<<setfill('=')<<"="<<endl;
//	            cout<<"THANK FOR USING"<<endl;
//	            cout<<setw(65)<<setfill('=')<<"="<<endl;

	return 0;
}