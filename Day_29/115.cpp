//C++ program to perform various operations on a string using switch case
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100], temp[100];
    int choice;

    str1[0] = '\0';     // Initialize empty string

    do {
        cout << "\n===== STRING MENU =====\n";
        cout << "1. Input String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length\n";
        cout << "4. Copy String\n";
        cout << "5. Concatenate String\n";
        cout << "6. Compare Strings\n";
        cout << "7. Reverse String\n";
        cout << "8. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {

        case 1:
            cout << "Enter String: ";
            cin.getline(str1, 100);
            break;

        case 2:
            cout << "String = " << str1 << endl;
            break;

        case 3:
            cout << "Length = " << strlen(str1) << endl;
            break;

        case 4:
            strcpy(temp, str1);
            cout << "Copied String = " << temp << endl;
            break;

        case 5:
            cout << "Enter Second String: ";
            cin.getline(str2, 100);

            strcpy(temp, str1);
            strcat(temp, str2);

            cout << "Concatenated String = " << temp << endl;
            break;

        case 6:
            cout << "Enter Second String: ";
            cin.getline(str2, 100);

            if(strcmp(str1, str2) == 0)
                cout << "Strings are Equal\n";
            else
                cout << "Strings are Not Equal\n";
            break;

        case 7:
            int len;
            len = strlen(str1);

            cout << "Reversed String = ";
            for(int i = len - 1; i >= 0; i--)
                cout << str1[i];

            cout << endl;
            break;

        case 8:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 8);

    return 0;
}