//C++ program to implement a simple student record system using structures
#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    int roll;
    char name[50];
    char course[30];
};

int main() {
    Student s[100];
    int n = 0, choice, roll, i, found;

    do {
        cout << "\n===== STUDENT RECORD SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {

        case 1:
            cout << "Enter Roll No: ";
            cin >> s[n].roll;
            cin.ignore();

            cout << "Enter Name: ";
            cin.getline(s[n].name, 50);

            cout << "Enter Course: ";
            cin.getline(s[n].course, 30);

            n++;
            cout << "Student Added Successfully.\n";
            break;

        case 2:
            if(n == 0) {
                cout << "No Records Found.\n";
            }
            else {
                cout << "\nRoll\tName\t\tCourse\n";

                for(i = 0; i < n; i++) {
                    cout << s[i].roll << "\t"
                         << s[i].name << "\t\t"
                         << s[i].course << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Roll No to Search: ";
            cin >> roll;

            found = 0;

            for(i = 0; i < n; i++) {
                if(s[i].roll == roll) {
                    cout << "\nStudent Found\n";
                    cout << "Roll No : " << s[i].roll << endl;
                    cout << "Name    : " << s[i].name << endl;
                    cout << "Course  : " << s[i].course << endl;

                    found = 1;
                    break;
                }
            }

            if(found == 0)
                cout << "Student Not Found.\n";

            break;

        case 4:
            cout << "Enter Roll No to Update: ";
            cin >> roll;
            cin.ignore();

            found = 0;

            for(i = 0; i < n; i++) {
                if(s[i].roll == roll) {

                    cout << "Enter New Name: ";
                    cin.getline(s[i].name, 50);

                    cout << "Enter New Course: ";
                    cin.getline(s[i].course, 30);

                    found = 1;
                    cout << "Record Updated Successfully.\n";
                    break;
                }
            }

            if(found == 0)
                cout << "Student Not Found.\n";

            break;

        case 5:
            cout << "Enter Roll No to Delete: ";
            cin >> roll;

            found = 0;

            for(i = 0; i < n; i++) {
                if(s[i].roll == roll) {

                    for(int j = i; j < n - 1; j++) {
                        s[j] = s[j + 1];
                    }

                    n--;
                    found = 1;

                    cout << "Record Deleted Successfully.\n";
                    break;
                }
            }

            if(found == 0)
                cout << "Student Not Found.\n";

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