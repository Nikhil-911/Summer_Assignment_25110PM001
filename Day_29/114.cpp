//C++ program to perform various operations on an array using switch case
#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0, choice, pos, val, i;

    do {
        cout << "\n===== Array Operations Menu =====\n";
        cout << "1. Create Array\n";
        cout << "2. Display Array\n";
        cout << "3. Insert Element\n";
        cout << "4. Delete Element\n";
        cout << "5. Search Element\n";
        cout << "6. Update Element\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter number of elements: ";
            cin >> n;

            cout << "Enter elements:\n";
            for(i = 0; i < n; i++)
                cin >> arr[i];
            break;

        case 2:
            cout << "Array Elements: ";
            for(i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;

        case 3:
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;

            for(i = n; i > pos - 1; i--)
                arr[i] = arr[i - 1];

            arr[pos - 1] = val;
            n++;
            break;

        case 4:
            cout << "Enter position to delete: ";
            cin >> pos;

            for(i = pos - 1; i < n - 1; i++)
                arr[i] = arr[i + 1];

            n--;
            cout << "Element deleted.\n";
            break;

        case 5:
            cout << "Enter element to search: ";
            cin >> val;

            for(i = 0; i < n; i++) {
                if(arr[i] == val) {
                    cout << "Element found at position "
                         << i + 1 << endl;
                    break;
                }
            }

            if(i == n)
                cout << "Element not found.\n";
            break;

        case 6:
            cout << "Enter position to update: ";
            cin >> pos;
            cout << "Enter new value: ";
            cin >> val;

            arr[pos - 1] = val;
            cout << "Element updated.\n";
            break;

        case 7:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 7);

    return 0;


}