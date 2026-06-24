// C++ program to implement a simple Contact Management System
#include <iostream>
#include <string>
using namespace std;

class Contact {
    int id[100], count = 0;
    string name[100], phone[100];

public:
    void addContact() {
        cout << "\nEnter Contact ID: ";
        cin >> id[count];

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name[count]);

        cout << "Enter Phone Number: ";
        getline(cin, phone[count]);

        count++;
        cout << "Contact Added Successfully!\n";
    }

    void displayContacts() {
        if (count == 0) {
            cout << "\nNo Contacts Available.\n";
            return;
        }

        cout << "\n----- Contact List -----\n";
        for (int i = 0; i < count; i++) {
            cout << "\nContact " << i + 1 << endl;
            cout << "ID     : " << id[i] << endl;
            cout << "Name   : " << name[i] << endl;
            cout << "Phone  : " << phone[i] << endl;
        }
    }

    void searchContact() {
        int searchId;
        cout << "\nEnter Contact ID to Search: ";
        cin >> searchId;

        for (int i = 0; i < count; i++) {
            if (id[i] == searchId) {
                cout << "\nContact Found\n";
                cout << "ID     : " << id[i] << endl;
                cout << "Name   : " << name[i] << endl;
                cout << "Phone  : " << phone[i] << endl;
                return;
            }
        }

        cout << "Contact Not Found.\n";
    }

    void deleteContact() {
        int deleteId;
        cout << "\nEnter Contact ID to Delete: ";
        cin >> deleteId;

        for (int i = 0; i < count; i++) {
            if (id[i] == deleteId) {

                for (int j = i; j < count - 1; j++) {
                    id[j] = id[j + 1];
                    name[j] = name[j + 1];
                    phone[j] = phone[j + 1];
                }

                count--;
                cout << "Contact Deleted Successfully!\n";
                return;
            }
        }

        cout << "Contact Not Found.\n";
    }
};

int main() {
    Contact c;
    int choice;

    do {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                c.addContact();
                break;

            case 2:
                c.displayContacts();
                break;

            case 3:
                c.searchContact();
                break;

            case 4:
                c.deleteContact();
                break;

            case 5:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}