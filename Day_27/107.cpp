//C++ program to implement a simple Ticket Booking System
#include <iostream>
#include <string>
using namespace std;

class Ticket {
public:
    int seatNo;
    string name;
    bool booked;

    Ticket() {
        booked = false;
    }
};

int main() {
    Ticket seats[10];
    int choice, seat;
    string name;

    
    for (int i = 0; i < 10; i++) {
        seats[i].seatNo = i + 1;
    }

    do {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. View Available Seats\n";
        cout << "2. Book Ticket\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Display Booked Tickets\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nAvailable Seats:\n";
            for (int i = 0; i < 10; i++) {
                if (!seats[i].booked)
                    cout << "Seat " << seats[i].seatNo << endl;
            }
            break;

        case 2:
            cout << "\nEnter Seat Number (1-10): ";
            cin >> seat;

            if (seat < 1 || seat > 10) {
                cout << "Invalid Seat Number!\n";
            }
            else if (seats[seat - 1].booked) {
                cout << "Seat Already Booked!\n";
            }
            else {
                cin.ignore();

                cout << "Enter Passenger Name: ";
                getline(cin, name);

                seats[seat - 1].name = name;
                seats[seat - 1].booked = true;

                cout << "Ticket Booked Successfully!\n";
            }
            break;

        case 3:
            cout << "\nEnter Seat Number to Cancel: ";
            cin >> seat;

            if (seat < 1 || seat > 10) {
                cout << "Invalid Seat Number!\n";
            }
            else if (!seats[seat - 1].booked) {
                cout << "Seat is Not Booked.\n";
            }
            else {
                seats[seat - 1].booked = false;
                seats[seat - 1].name = "";

                cout << "Ticket Cancelled Successfully!\n";
            }
            break;

        case 4:
            cout << "\nBooked Tickets:\n";

            for (int i = 0; i < 10; i++) {
                if (seats[i].booked) {
                    cout << "Seat No : " << seats[i].seatNo
                         << "\tPassenger : " << seats[i].name << endl;
                }
            }
            break;

        case 5:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}