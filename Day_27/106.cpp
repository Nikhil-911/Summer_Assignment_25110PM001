//C++ program to implement a simple Employee Management System    
#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int id;
    string name;
    string designation;
    float salary;
};

int main() {
    Employee emp[100];
    int count = 0, choice, id;
    bool found;

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> emp[count].id;

            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, emp[count].name);

            cout << "Enter Designation: ";
            getline(cin, emp[count].designation);

            cout << "Enter Salary: ";
            cin >> emp[count].salary;

            count++;
            cout << "\nEmployee Added Successfully!\n";
            break;

        case 2:
            if (count == 0) {
                cout << "\nNo Employee Records Found.\n";
            } else {
                cout << "\n===== Employee Records =====\n";

                for (int i = 0; i < count; i++) {
                    cout << "\nEmployee ID : " << emp[i].id;
                    cout << "\nName        : " << emp[i].name;
                    cout << "\nDesignation : " << emp[i].designation;
                    cout << "\nSalary      : " << emp[i].salary;
                    cout << "\n-----------------------------";
                }
            }
            break;

        case 3:
            found = false;

            cout << "\nEnter Employee ID to Search: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (emp[i].id == id) {
                    cout << "\nEmployee Found";
                    cout << "\nEmployee ID : " << emp[i].id;
                    cout << "\nName        : " << emp[i].name;
                    cout << "\nDesignation : " << emp[i].designation;
                    cout << "\nSalary      : " << emp[i].salary;

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nEmployee Not Found.\n";

            break;

        case 4:
            found = false;

            cout << "\nEnter Employee ID to Update: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (emp[i].id == id) {

                    cin.ignore();

                    cout << "Enter New Name: ";
                    getline(cin, emp[i].name);

                    cout << "Enter New Designation: ";
                    getline(cin, emp[i].designation);

                    cout << "Enter New Salary: ";
                    cin >> emp[i].salary;

                    cout << "\nEmployee Record Updated Successfully!\n";

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nEmployee Not Found.\n";

            break;

        case 5:
            found = false;

            cout << "\nEnter Employee ID to Delete: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (emp[i].id == id) {

                    for (int j = i; j < count - 1; j++) {
                        emp[j] = emp[j + 1];
                    }

                    count--;
                    found = true;

                    cout << "\nEmployee Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "\nEmployee Not Found.\n";

            break;

        case 6:
            cout << "\nExiting Program...\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}