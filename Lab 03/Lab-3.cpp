#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	//Program(Squared Distance)
	//Varaible Declaration and initialization
	double x1,x2,y1,y2,squared_distance;
	x1=3;
	x2=6;
	y1=4;
	y2=8;
	//Calculating Squared distance
	squared_distance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	//Showing Output on console
	cout<<"The squared distance between the points "<<"("<<x1<<","<<y1<<")"<<" and "
	    <<"("<<x2<<","<<y2<<")"<<" is: "<<squared_distance<<endl;
	return 0;
}


//	//Program1--Items Purchase list
//
//	//decalaring varaibles
//	double item1,item2,item3,item4,item5,subtotal,tax,total;
//	item1=12.95;
//	item2=24.95;
//	item3=6.95;
//	item4=14.95;
//	item5=3.95;
//	//formulae for calculation
//	subtotal=item1+item2+item3+item4+item5;
//	const double tax_rate=0.06;
//	tax=subtotal*tax_rate;
//	total=subtotal+tax;
//	//showing output on console
//	cout<<"Price of item 1:  $"<<item1<<endl;
//	cout<<"Price of item 2:  $"<<item2<<endl;
//	cout<<"Price of item 3:  $"<<item3<<endl;
//	cout<<"Price of item 4:  $"<<item4<<endl;
//	cout<<"Price of item 5:  $"<<item5<<endl;
//	cout<<"Subtotal: $"<<subtotal<<endl;
//	cout<<"Sales Tax (6%):  $"<<tax<<endl;
//	cout<<"Total: $"<<total<<endl;
//	return 0;
//}











//	//Program5-(Trip Cost Estimator)
//
//	//declaring varaible
//	double distance,V_effiency,fuelCost,tripcost;
//	//taking input from user
//	cout<<"Trip Cost Estimator"<<endl;
//	cout<<"-------------------"<<endl;
//	cout<<"Enter distance of the trip in kilometers: ";
//	cin>>distance;
//	cout<<"Enter vehicle Fuel Efficiency(km per litre): ";
//	cin>>V_effiency;
//	cout<<"Enter Fuel cost per litre: ";
//	cin>>fuelCost;
//	//calculating tripcost
//	tripcost=(distance/V_effiency)*fuelCost;
//	//showing ouput
//	cout<< "Total trip cost: Rs "<<tripcost<<endl;
//
//	return 0;
//}


















//	//program4-(BMI Calculator using cin)
//
//	//declaring variables
//	double weight,height,BMI;
//	cout<<"BMI Calculator"<<endl;
//	cout<<"--------------"<<endl;
//	//Taking intput from user
//	cout<<"Enter your weight in Kilograms:";
//	cin>>weight;
//	cout<<"Enter your height in meters: ";
//	cin>>height;
//	//calculating BMI
//	BMI=weight/(height*height);
//	//showing output
//	cout<<"Your BMI is: "<<BMI<<endl;
//	return 0;
//}
//



//
//	//program3-(Implementing Arithmetic Operators)
//
//	//declaring the varaible needed
//	int number1,number2,sum,sub,multiply,division,mod;
//	//taking intput from user
//	cout<<"Enter two numbers :"<<endl;
//	cout<<"Number 1 :";
//	cin>>number1;
//	cout<<"Number 2 :";
//	cin>>number2;
//	//formulae for arithmetic
//	sum=number1+number2;
//	sub=number1-number2;
//	multiply=number1*number2;
//	division=number1/number2;
//	mod=number1%number2;
//	//show output with formatting
//	cout<<"\tAddition:"<<endl;
//	cout<<"\t\t"<<number1<<" + "<<number2<<" = "<<sum<<endl;
//	cout<<"\tSubtraction:"<<endl;
//	cout<<"\t\t"<<number1<<" - "<<number2<<" = "<<sub<<endl;
//	cout<<"\tMultiplication:"<<endl;
//	cout<<"\t\t"<<number1<<" * "<<number2<<" = "<<multiply<<endl;
//	cout<<"\tDivision:"<<endl;
//	cout<<"\t\t"<<number1<<" / "<<number2<<" = "<<division<<endl;
//	cout<<"\tModulus:"<<endl;
//	cout<<"\t\t"<<number1<<" % "<<number2<<" = "<<mod<<endl;
//	return 0;
//}







//   //PROGRAM-2(Average of three Numbers with setprecision)
//
//	//declaring variable needed
//	double number1,number2,number3,sum,average;
//	number1=85.5;
//	number2=90.75;
//	number3=88.25;
//	//calculating average
//	sum=number1+number2+number3;
//	average=sum/3;
//	//showing output on console.
//	cout<<fixed<<setprecision(2)<<endl;
//	cout<<"The average of "<<number1<<", "<<number2<<" and "<<number3<<" = "<<average<<endl;
//	return 0;
//
//}