//C++ program to implement a simple Student Record Management System
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student s[100];
    int count = 0, choice, roll;
    bool found;

    do {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Roll Number: ";
            cin >> s[count].rollNo;

            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, s[count].name);

            cout << "Enter Marks: ";
            cin >> s[count].marks;

            count++;
            cout << "Student added successfully.\n";
            break;

        case 2:
            if (count == 0) {
                cout << "No records found.\n";
            } else {
                cout << "\nStudent Records\n";
                for (int i = 0; i < count; i++) {
                    cout << "\nRoll No : " << s[i].rollNo;
                    cout << "\nName    : " << s[i].name;
                    cout << "\nMarks   : " << s[i].marks;
                    cout << "\n---------------------";
                }
            }
            break;

        case 3:
            found = false;
            cout << "Enter Roll Number to Search: ";
            cin >> roll;

            for (int i = 0; i < count; i++) {
                if (s[i].rollNo == roll) {
                    cout << "\nStudent Found";
                    cout << "\nRoll No : " << s[i].rollNo;
                    cout << "\nName    : " << s[i].name;
                    cout << "\nMarks   : " << s[i].marks;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found.\n";

            break;

        case 4:
            found = false;
            cout << "Enter Roll Number to Update: ";
            cin >> roll;

            for (int i = 0; i < count; i++) {
                if (s[i].rollNo == roll) {
                    cin.ignore();

                    cout << "Enter New Name: ";
                    getline(cin, s[i].name);

                    cout << "Enter New Marks: ";
                    cin >> s[i].marks;

                    cout << "Record updated successfully.\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found.\n";

            break;

        case 5:
            found = false;
            cout << "Enter Roll Number to Delete: ";
            cin >> roll;

            for (int i = 0; i < count; i++) {
                if (s[i].rollNo == roll) {

                    for (int j = i; j < count - 1; j++) {
                        s[j] = s[j + 1];
                    }

                    count--;
                    found = true;
                    cout << "Record deleted successfully.\n";
                    break;
                }
            }

            if (!found)
                cout << "Student not found.\n";

            break;

        case 6:
            cout << "Program terminated.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}