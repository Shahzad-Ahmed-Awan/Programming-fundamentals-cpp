//*************************** Program-01 *****************************************

#include <iostream>
using namespace std;

// Structure to store student information
struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    // Member function to display student details
    void displayStudentInfo() {
        cout << "Student Full Name: " + firstName + " " + lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Declare a structure variable
    Student student1;

    // Assign values to structure members
    student1.firstName = "Ali";
    student1.lastName = "Ahmed";
    student1.rollNumber = 101;
    student1.marks = 89.5;

    // Call the member function to display information
    cout << "Student Information:" << endl;
    student1.displayStudentInfo();

    return 0;
}


//**************************** Program -2 using Array ***************************

//#include <iostream>
//using namespace std;
//
//// Structure to store student information
//struct Student {
//    string firstName;
//    string lastName;
//    int rollNumber;
//    float marks;
//
//    // Member function to display student details
//    void displayStudentInfo() {
//        cout << "Student Full Name: " + firstName + " " + lastName << endl;
//        cout << "Roll Number: " << rollNumber << endl;
//        cout << "Marks: " << marks << endl;
//        cout << "----------------------------" << endl;
//    }
//};
//
//int main() {
//    int numStudents;
//
//    // Asking the user how many students they want to enter
//    cout << "Enter the number of students: ";
//    cin >> numStudents;
//
//    // Declaring an array of Student structures
//    Student students[numStudents];
//
//    // Inputing student details
//    for (int i = 0; i < numStudents; i++) {
//        cout << "\nEnter details for Student " << i + 1 << ":" << endl;
//        cout << "First Name: ";
//        cin >> students[i].firstName;
//        cout << "Last Name: ";
//        cin >> students[i].lastName;
//        cout << "Roll Number: ";
//        cin >> students[i].rollNumber;
//        cout << "Marks: ";
//        cin >> students[i].marks;
//    }
//    cout<<"\n\n------------------------------------------"<<endl;
//	cout<<"Details Of Student You Entered are Below: "<<endl;
//	cout<<"------------------------------------------"<<endl;
//    // Display student details
//
//    for (int i = 0; i < numStudents; i++) {
//    	 cout << "\nStudent"<<i+1<<endl;
//    	 cout<<endl;
//        students[i].displayStudentInfo();
//    }
//
//    return 0;
//}




//************************** Program-03 using Dynamic Memory and pointers ********************

//#include <iostream>
//using namespace std;
//
//// Structure to store student information
//struct Student {
//    string firstName;
//    string lastName;
//    int rollNumber;
//    float marks;
//
//    // Member function to display student details
//    void displayStudentInfo() {
//        cout << "Student Full Name: " + firstName + " " + lastName << endl;
//        cout << "Roll Number: " << rollNumber << endl;
//        cout << "Marks: " << marks << endl;
//        cout << "----------------------------" << endl;
//    }
//};
//
//int main() {
//    int numStudents;
//
//    // Ask the user how many students they want to enter
//    cout << "Enter the number of students: ";
//    cin >> numStudents;
//
//    // Dynamically allocate memory for students
//    Student *students = new Student[numStudents];
//
//    // Input student details using the pointer
//    for (int i = 0; i < numStudents; i++) {
//        cout << "\nEnter details for Student " << i + 1 << ":" << endl;
//        cout << "First Name: ";
//        cin >> (students + i)->firstName;
//        cout << "Last Name: ";
//        cin >> (students + i)->lastName;
//        cout << "Roll Number: ";
//        cin >> (students + i)->rollNumber;
//        cout << "Marks: ";
//        cin >> (students + i)->marks;
//    }
//    
//    cout<<"\n\n------------------------------------------"<<endl;
//	cout<<"Details Of Student You Entered are Below: "<<endl;
//	cout<<"------------------------------------------"<<endl;
//
//    // Display student details using the pointer
// 
//    for (int i = 0; i < numStudents; i++) {
//    	 cout << "\nStudent-"<<i+1<<endl;
//    	 cout<<endl;
//        (students + i)->displayStudentInfo();
//    }
//
//    // Free dynamically allocated memory
//    delete[] students;
//
//    return 0;
//}






