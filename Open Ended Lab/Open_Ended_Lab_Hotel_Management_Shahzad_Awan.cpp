#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <iomanip>
using namespace std;

// ========== STRUCTURES ==========
struct User {
    string username;
    string password;
    string mobile;
    bool isGuest = false;
    bool isAdmin = false;
    int bookedRoom = -1;
    float totalBill = 0;
};

struct Room {
    int number;
    string category;
    float price;
    bool isAvailable;
    time_t bookingTime;
};

struct FoodItem {
    int id;
    string mealType;
    string subCategory;
    string name;
    float price;
};

// ========== GLOBAL VARIABLES ==========
User users[10];
Room rooms[50];
FoodItem menu[30];
int totalUsers = 0;
int totalRooms = 15;
int totalFoodItems = 0;
float totalSales = 0;
int Days;


// ========== COLOR SYSTEM ==========
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void drawHeader(string title) {
    setColor(11);
    cout << "\n========================================\n";
    cout << "          " << title << " \n";
    cout << "========================================\n";
    setColor(7);
}

// ========== INITIALIZATION ==========
void initializeRooms() {
    string categories[] = {"Standard", "Deluxe", "Suite"};
    float prices[] = {5000, 8000, 12000};
    for(int i=0; i<totalRooms; i++) {
        rooms[i].number = 101 + i;
        rooms[i].category = categories[i%3];
        rooms[i].price = prices[i%3];
        rooms[i].isAvailable = true;
    }
}

void initializeMenu() {
    FoodItem tempMenu[] = {
        {1, "Breakfast", "Main Course", "Masala Dosa", 120},
        {2, "Breakfast", "Drinks", "Fresh Juice", 80},
        {3, "Lunch", "Main Course", "Butter Chicken", 350},
        {4, "Lunch", "Dessert", "Gulab Jamun", 80},
        {5, "Dinner", "Main Course", "Biryani", 300},
        {6, "Dinner", "Drinks", "Mocktail", 150}
    };
    for(int i=0; i<6; i++) menu[totalFoodItems++] = tempMenu[i];
}

// ========== AUTHENTICATION ==========
void registerUser() {
    User newUser;
    drawHeader("REGISTRATION");
    cout << "Username: "; cin >> newUser.username;
    cout << "Password: "; cin >> newUser.password;
    cout << "Mobile: "; cin >> newUser.mobile;
    users[totalUsers++] = newUser;
    setColor(10); cout << "\nRegistration Successful!\n"; Sleep(1000);
}

bool userLogin() {
    string uname, pwd;
    drawHeader("USER LOGIN");
    cout << "Username: "; cin >> uname;
    cout << "Password: "; cin >> pwd;
    for(int i=0; i<totalUsers; i++) {
        if(users[i].username == uname && users[i].password == pwd) {
            setColor(10); cout << "\nLogin Successful!\n"; Sleep(1000);
            return true;
        }
    }
    setColor(12); cout << "\nInvalid Credentials!\n"; Sleep(1000);
    return false;
}

void guestLogin() {
    users[totalUsers].username = "Guest" + to_string(totalUsers+1);
    users[totalUsers].isGuest = true;
    totalUsers++;
    setColor(10); cout << "\nGuest Login Successful!\n"; Sleep(1000);
}


// ========== ROOM BOOKING ==========
void showAvailableRooms() {
    int counts[3] = {0};
    for(int i=0; i<totalRooms; i++) {
        if(rooms[i].isAvailable) {
            if(rooms[i].category == "Standard") counts[0]++;
            else if(rooms[i].category == "Deluxe") counts[1]++;
            else counts[2]++;
        }
    }
    drawHeader("AVAILABLE ROOMS");
    setColor(10);
    cout << "1. Standard (" << counts[0] << ")\t?5000/night\n";
    cout << "2. Deluxe (" << counts[1] << ")\t?8000/night\n";
    cout << "3. Suite (" << counts[2] << ")\t?12000/night\n";
}

void bookRoom(User &user) {
    showAvailableRooms();
    int choice;
    cout << "\nChoose category (1-3): "; cin >> choice;
    if(choice <1 || choice>3) {
        setColor(12); cout << "Invalid Choice!"; Sleep(1000); return;
    }
    
    string categories[] = {"Standard", "Deluxe", "Suite"};
    for(int i=0; i<totalRooms; i++) {
        if(rooms[i].category == categories[choice-1] && rooms[i].isAvailable) {
            rooms[i].isAvailable = false;
            user.bookedRoom = rooms[i].number;
            rooms[i].bookingTime = time(0);
            setColor(10);
            cout<<"Enter Number of Days: ";
            cin>>Days;
            cout << "\nRoom " << rooms[i].number << " Booked!\n";
            Sleep(1500);
            return;
        }
    }
    setColor(12); cout << "No Rooms Available!"; Sleep(1000);
}

// ========== FOOD SYSTEM ==========
string getMealTime() {
    time_t now = time(0);
    tm *t = localtime(&now);
    int hour = t->tm_hour;
    if(hour >=6 && hour <11) return "Breakfast";
    else if(hour >=11 && hour <16) return "Lunch";
    else return "Dinner";
}

void showFoodMenu() {
    string meal = getMealTime();
    drawHeader(meal + " MENU");
    string categories[] = {"Main Course", "Drinks", "Dessert"};
    
    for(string cat : categories) {
        setColor(14);
        cout << "\n--- " << cat << " ---\n";
        setColor(11);
        for(int i=0; i<totalFoodItems; i++) {
            if(menu[i].mealType == meal && menu[i].subCategory == cat) {
                cout << left << setw(3) << menu[i].id 
                     << setw(25) << menu[i].name 
                     << "?" << menu[i].price << endl;
            }
        }
    }
}

void orderFood(User &user) {
    showFoodMenu();
    int itemId, qty;
    setColor(10); 
    cout << "\nEnter item ID (0 to exit): "; cin >> itemId;
    if(itemId == 0) return;
    
    for(int i=0; i<totalFoodItems; i++) {
        if(menu[i].id == itemId) {
            cout << "Quantity: "; cin >> qty;
            user.totalBill += menu[i].price * qty;
            setColor(10); cout << qty << "x Added!\n"; Sleep(1000);
            return;
        }
    }
    setColor(12); cout << "Invalid Item ID!"; Sleep(1000);
}
// ========== ADMIN PANEL ==========
void adminPanel() {
    while(true) {
        system("cls");
        drawHeader("ADMIN DASHBOARD");
        setColor(14);
        cout << "1. Add Room\n2. Add Food Item\n3. Sales Report\n4. Exit\n";
        int choice; cout << "\nChoice: "; cin >> choice;
        
        if(choice == 1) {
            Room newRoom;
            cout << "Category (Standard/Deluxe/Suite): "; cin >> newRoom.category;
            cout << "Price: "; cin >> newRoom.price;
            newRoom.number = 100 + totalRooms;
            newRoom.isAvailable = true;
            rooms[totalRooms++] = newRoom;
            setColor(10); cout << "Room Added!\n"; Sleep(1000);
        }
        else if(choice == 2) {
            FoodItem newItem;
            newItem.id = totalFoodItems + 1;
            cout << "Meal Type: "; cin >> newItem.mealType;
            cout << "Category: "; cin >> newItem.subCategory;
            cout << "Name: "; cin.ignore(); getline(cin, newItem.name);
            cout << "Price: "; cin >> newItem.price;
            menu[totalFoodItems++] = newItem;
            setColor(10); cout << "Item Added!\n"; Sleep(1000);
        }
        else if(choice == 3) {
            drawHeader("SALES REPORT");
            setColor(14);
            cout << "Total Revenue: ?" << totalSales << endl;
    
            Sleep(2000);
        }
        else break;
    }
}

// ========== BILLING SYSTEM ==========
void generateBill(User &user) {
    system("cls");
    drawHeader("INVOICE");
    time_t now = time(0);
    
    // Room charges
    float roomFee = 0;
    for(int i=0; i<totalRooms; i++) {
        if(rooms[i].number == user.bookedRoom) {
            int hours = difftime(now, rooms[i].bookingTime)/3600;
            int days = hours/24 + (hours%24 > 3 ? 1 : 0);
            roomFee = Days * rooms[i].price;
            break;
        }
    }
  // Get current time
    tm *ltm = localtime(&now);
    setColor(11);
    cout << "Date: " << ltm->tm_mday << "/" << 1+ltm->tm_mon << "/" << 1900+ltm->tm_year << endl;
    cout << "Time: " << ltm->tm_hour << ":" << ltm->tm_min << endl << endl;

    // Display
    setColor(14);
    cout << "Room Charges:\t?" << roomFee << endl;
    cout << "Food/Service:\t?" << user.totalBill << endl;
    
    float tax = (roomFee + user.totalBill) * 0.10;
    setColor(11);
    cout << "Tax (10%):\t?" << tax << endl;
    setColor(10);
    cout << "Total:\t?" << roomFee + user.totalBill + tax << endl;
     // Footer
    setColor(10);
    cout << "\nThank you for staying with us!\n";
    setColor(7);
    cout << "\nPress any key to continue...";
    _getch();
}

// ========== MAIN MENU ==========
void mainMenu(User &user) {
    while(true) {
        system("cls");
        drawHeader("MAIN MENU");
        setColor(14);
        cout << "1. Book Room\n2. Order Food\n3. View Bill\n4. Logout\n";
        int choice; cout << "\nChoice: "; cin >> choice;
        
        switch(choice) {
            case 1: bookRoom(user); break;
            case 2: orderFood(user); break;
            case 3: generateBill(user); break;
            case 4: return;
            default: setColor(12); cout << "Invalid!"; Sleep(1000);
        }
    }
}

// ========== MAIN FUNCTION ==========
int main() {
	 SetConsoleTitleA("Hotel Management System");
    initializeRooms();
    initializeMenu();
    SetConsoleTitleA("Hotel Management System");
    initializeRooms();
    initializeMenu();
    users[0] = {"admin", "admin123", "0000000000", false, true}; // Admin account
    totalUsers = 1;

    while(true) {
        system("cls");
        drawHeader("WELCOME");
        setColor(14);
        cout << "1. Register\n2. Login\n3. Guest\n4. Admin\n5. Exit\n";
        int choice; cout << "\nChoice: "; cin >> choice;
        
        if(choice == 1) registerUser();
        else if(choice == 2 && userLogin()) mainMenu(users[totalUsers-1]);
        else if(choice == 3) { guestLogin(); mainMenu(users[totalUsers-1]); }
        else if(choice == 4) adminPanel();
        else if(choice == 5) exit(0);
        else { setColor(12); cout << "Invalid!"; Sleep(1000); }
    }
    return 0;
}