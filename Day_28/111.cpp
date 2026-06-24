//C++ program to implement a simple Ticket Booking System
#include <iostream>
using namespace std;

class TicketBooking {
    int seats[10];

public:
    TicketBooking() {
        for (int i = 0; i < 10; i++) {
            seats[i] = 0;      // 0 = Available
        }
    }

    void showSeats() {
        cout << "\nSeat Status\n";

        for (int i = 0; i < 10; i++) {
            cout << "Seat " << i + 1 << " : ";

            if (seats[i] == 0)
                cout << "Available";
            else
                cout << "Booked";

            cout << endl;
        }
    }

    void bookTicket() {
        int seatNo;

        cout << "\nEnter Seat Number (1-10): ";
        cin >> seatNo;

        if (seatNo < 1 || seatNo > 10) {
            cout << "Invalid Seat Number\n";
        }
        else if (seats[seatNo - 1] == 1) {
            cout << "Seat Already Booked\n";
        }
        else {
            seats[seatNo - 1] = 1;
            cout << "Ticket Booked Successfully\n";
        }
    }

    void cancelTicket() {
        int seatNo;

        cout << "\nEnter Seat Number to Cancel: ";
        cin >> seatNo;

        if (seatNo < 1 || seatNo > 10) {
            cout << "Invalid Seat Number\n";
        }
        else if (seats[seatNo - 1] == 0) {
            cout << "Seat is Already Available\n";
        }
        else {
            seats[seatNo - 1] = 0;
            cout << "Ticket Cancelled Successfully\n";
        }
    }

    void bookedTickets() {
        cout << "\nBooked Seats: ";

        bool found = false;

        for (int i = 0; i < 10; i++) {
            if (seats[i] == 1) {
                cout << i + 1 << " ";
                found = true;
            }
        }

        if (!found)
            cout << "No Tickets Booked";

        cout << endl;
    }
};

int main() {
    TicketBooking t;
    int choice;

    do {
        cout << "\n===== TICKET BOOKING SYSTEM =====\n";
        cout << "1. View Seats\n";
        cout << "2. Book Ticket\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. View Booked Tickets\n";
        cout << "5. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                t.showSeats();
                break;

            case 2:
                t.bookTicket();
                break;

            case 3:
                t.cancelTicket();
                break;

            case 4:
                t.bookedTickets();
                break;

            case 5:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while (choice != 5);

    return 0;
}