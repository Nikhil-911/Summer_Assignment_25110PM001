//C++ program to implement a simple Library Management System
#include <iostream>
#include <string>
using namespace std;

class Library {
    int bookId[100];
    string title[100];
    string author[100];
    int count = 0;

public:
    void addBook() {
        cout << "\nEnter Book ID: ";
        cin >> bookId[count];

        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, title[count]);

        cout << "Enter Author Name: ";
        getline(cin, author[count]);

        count++;
        cout << "Book Added Successfully!\n";
    }

    void displayBooks() {
        if (count == 0) {
            cout << "\nNo Books Available.\n";
            return;
        }

        cout << "\nBook List\n";
        for (int i = 0; i < count; i++) {
            cout << "\nBook " << i + 1 << endl;
            cout << "Book ID : " << bookId[i] << endl;
            cout << "Title   : " << title[i] << endl;
            cout << "Author  : " << author[i] << endl;
        }
    }

    void searchBook() {
        int id;
        cout << "\nEnter Book ID to Search: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (bookId[i] == id) {
                cout << "\nBook Found\n";
                cout << "Book ID : " << bookId[i] << endl;
                cout << "Title   : " << title[i] << endl;
                cout << "Author  : " << author[i] << endl;
                return;
            }
        }

        cout << "Book Not Found.\n";
    }

    void deleteBook() {
        int id;
        cout << "\nEnter Book ID to Delete: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (bookId[i] == id) {

                for (int j = i; j < count - 1; j++) {
                    bookId[j] = bookId[j + 1];
                    title[j] = title[j + 1];
                    author[j] = author[j + 1];
                }

                count--;
                cout << "Book Deleted Successfully.\n";
                return;
            }
        }

        cout << "Book Not Found.\n";
    }
};

int main() {
    Library l;
    int choice;

    do {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Delete Book\n";
        cout << "5. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                l.addBook();
                break;

            case 2:
                l.displayBooks();
                break;

            case 3:
                l.searchBook();
                break;

            case 4:
                l.deleteBook();
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