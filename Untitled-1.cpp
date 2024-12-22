#include <iostream>
#include <stdlib.h>
//#include <conio.h>
#include <fstream>

using namespace std;

// Global variables
int days, amount, amountWithDriver;
char driverChoice;
string *name = new string;
int choice;

// Function prototypes
void displayTitle(string x);
void displayBorder();
void showCarDetails(const string *carName, const string *model, const string *fuelConsumption, const string *color);
void charges();
void calculateCharges(int choice);
void information();

void displayTitle(string x) {
    cout << "-\t\t\t" << x << "\t\t\t-" << endl;
}

void displayBorder() {
    cout << "=================================================================================" << endl;
}

void information() {
    system("cls");

    string infoLines[] = {
        "G RENTALS HAS BEEN PROVIDING",
        "BEST RENTAL SERVICES SINCE 2019",
        "G RENTS VARIETY OF CARS IN",
        "GOOD CONDITION AND GIVES CUSTOMERS",
        "BEST SERVICES ACROSS MULTIPLE LOCATIONS",
        "TIMINGS: 9AM || 7PM MONDAY TO SATURDAY",
        "FOR FURTHER INFORMATION",
        "CONTACT: 03356543288 || 03340800013"
    };

    int numLines = sizeof(infoLines) / sizeof(infoLines[0]);

    displayBorder();
    for (int i = 0; i < numLines; i++) {
        displayTitle(infoLines[i]);
    }
    displayBorder();
}

void showCarDetails(const string *carName, const string *model, const string *fuelConsumption, const string *color) {
    system("cls");
    cout << " \n\n\n\n\t\t\t\t****************** " << *carName << " SPECS ****************** " << endl;
    cout << "\n\n\n\t\t\t\t\t      MODEL : " << *model << endl;
    cout << "\n\n\n\t\t\t\t\t      FUEL CONSUMPTION : " << *fuelConsumption << endl;
    cout << "\n\n\n\t\t\t\t\t      COLOUR : " << *color << endl;
}

void charges() {
    cout << "\nDo You Want a Driver (y/n)? : ";
    cin >> driverChoice;
    cout << "\nYour Name: ";
    cin >> *name;
    cout << "\nFor How Many Days? : ";
    cin >> days;

    amount = days * 500;

    if (driverChoice == 'y' || driverChoice == 'Y') {
        amountWithDriver = amount + (days * 1000);
        cout << "\nTotal Amount with Driver = " << amountWithDriver << " PKR" << endl;
    } else {
        cout << "\nTotal Amount = " << amount << " PKR" << endl;
    }

    cout << "\n\t\t\t\t ********** Thank You for Visiting Dabang Rent A Car Services **********";
}

void calculateCharges(int carChoice) {
    system("cls");
    switch (carChoice) {
        case 1:
            cout << "\t\t\t\t ********* You Selected AUDI ********* " << endl;
            charges();
            break;
        case 2:
            cout << "\t\t\t\t ********* You Selected DODGE ********* " << endl;
            charges();
            break;
        case 3:
            cout << "\t\t\t\t ********* You Selected MAZDA ********* " << endl;
            charges();
            break;
        case 4:
            cout << "\t\t\t\t ********* You Selected BMW ********* " << endl;
            charges();
            break;
        case 5:
            cout << "\t\t\t\t ********* You Selected MUSTANG ********* " << endl;
            charges();
            break;
        case 6:
            cout << "\t\t\t\t ********* You Selected VOLVO ********* " << endl;
            charges();
            break;
        default:
            cout << "\t\t\tInvalid Selection!" << endl;
    }
}

void carSelection() {
    system("cls");
    cout << "\t\t\t ********* SELECT THE CAR *********" << endl;

    string cars[6] = {"AUDI", "DODGE", "MAZDA", "BMW", "MUSTANG", "VOLVO"};
    for (int i = 0; i < 6; i++) {
        cout << "\t\t\t\t" << i + 1 << ". " << cars[i] << endl;
    }

    cout << "\nEnter Your Choice: ";
    cin >> choice;

    calculateCharges(choice);
}

int main() {
    system("cls");

    // Display welcome message
    cout << "\t\t\t WELCOME TO DABANG RENT A CAR SERVICES " << endl << endl;
    displayBorder();

    char mainChoice;
    cout << "\nWould you like to rent a car? (y/n): ";
    cin >> mainChoice;

    if (mainChoice == 'y' || mainChoice == 'Y') {
        carSelection();
    } else {
        cout << "\nThank you for visiting us!" << endl;
    }

    delete name; // Free dynamically allocated memory
    return 0;
}