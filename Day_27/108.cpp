//C++ program to implement a simple Student Record Management System
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    int marks[5];
    int total;
    float percentage;
    char grade;

    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Marks of 5 Subjects:\n";
        for(int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculate() {
        total = 0;

        for(int i = 0; i < 5; i++)
            total += marks[i];

        percentage = total / 5.0;

        if(percentage >= 90)
            grade = 'A';
        else if(percentage >= 75)
            grade = 'B';
        else if(percentage >= 60)
            grade = 'C';
        else if(percentage >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void display() {
        cout << "\n====================================";
        cout << "\n          MARK SHEET";
        cout << "\n====================================";

        cout << "\nRoll Number : " << rollNo;
        cout << "\nStudent Name: " << name;

        cout << "\n\nMarks Obtained";
        for(int i = 0; i < 5; i++) {
            cout << "\nSubject " << i + 1 << " : " << marks[i];
        }

        cout << "\n\nTotal Marks : " << total << "/500";
        cout << "\nPercentage  : " << percentage << "%";
        cout << "\nGrade       : " << grade;

        if(grade == 'F')
            cout << "\nResult      : Fail";
        else
            cout << "\nResult      : Pass";

        cout << "\n====================================\n";
    }
};

int main() {
    Student s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}