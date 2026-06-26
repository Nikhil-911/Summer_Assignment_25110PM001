// C++ program to implement a simple employee management system using structures 
#include <iostream> 
#include <cstring> 
using namespace std;

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main() {
    Employee emp[100];
    int n = 0, choice, id, i, found;

    do {
        cout << "\n===== EMPLOYEE MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Employee";
        cout << "\n5. Delete Employee";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {

        case 1:
            cout << "Enter Employee ID: ";
            cin >> emp[n].id;
            cin.ignore();

            cout << "Enter Name: ";
            cin.getline(emp[n].name, 50);

            cout << "Enter Department: ";
            cin.getline(emp[n].department, 30);

            cout << "Enter Salary: ";
            cin >> emp[n].salary;

            n++;
            cout << "Employee Added Successfully.\n";
            break;

        case 2:
            if(n == 0) {
                cout << "No Records Found.\n";
                break;
            }

            cout << "\nID\tName\t\tDepartment\tSalary\n";

            for(i = 0; i < n; i++) {
                cout << emp[i].id << "\t"
                     << emp[i].name << "\t\t"
                     << emp[i].department << "\t\t"
                     << emp[i].salary << endl;
            }
            break;

        case 3:
            cout << "Enter Employee ID to Search: ";
            cin >> id;

            found = 0;

            for(i = 0; i < n; i++) {
                if(emp[i].id == id) {
                    cout << "\nEmployee Found\n";
                    cout << "ID         : " << emp[i].id << endl;
                    cout << "Name       : " << emp[i].name << endl;
                    cout << "Department : " << emp[i].department << endl;
                    cout << "Salary     : " << emp[i].salary << endl;

                    found = 1;
                    break;
                }
            }

            if(found == 0)
                cout << "Employee Not Found.\n";

            break;

        case 4:
            cout << "Enter Employee ID to Update: ";
            cin >> id;
            cin.ignore();

            found = 0;

            for(i = 0; i < n; i++) {
                if(emp[i].id == id) {

                    cout << "Enter New Name: ";
                    cin.getline(emp[i].name, 50);

                    cout << "Enter New Department: ";
                    cin.getline(emp[i].department, 30);

                    cout << "Enter New Salary: ";
                    cin >> emp[i].salary;

                    found = 1;
                    cout << "Record Updated Successfully.\n";
                    break;
                }
            }

            if(found == 0)
                cout << "Employee Not Found.\n";

            break;

        case 5:
            cout << "Enter Employee ID to Delete: ";
            cin >> id;

            found = 0;

            for(i = 0; i < n; i++) {
                if(emp[i].id == id) {

                    for(int j = i; j < n - 1; j++) {
                        emp[j] = emp[j + 1];
                    }

                    n--;
                    found = 1;

                    cout << "Employee Deleted Successfully.\n";
                    break;
                }
            }

            if(found == 0)
                cout << "Employee Not Found.\n";

            break;

        case 6:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while(choice != 6);

    return 0;
}