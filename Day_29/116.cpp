//C++ program to implement a simple inventory management system using switch case
#include <iostream>
using namespace std;

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    Product p[100];
    int n = 0, choice, id, i, found;
    
    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Product";
        cout << "\n2. Display Products";
        cout << "\n3. Search Product";
        cout << "\n4. Update Quantity";
        cout << "\n5. Delete Product";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "\nEnter Product ID: ";
            cin >> p[n].id;

            cout << "Enter Product Name: ";
            cin >> p[n].name;

            cout << "Enter Quantity: ";
            cin >> p[n].quantity;

            cout << "Enter Price: ";
            cin >> p[n].price;

            n++;
            cout << "Product Added Successfully.\n";
            break;

        case 2:
            if(n == 0) {
                cout << "Inventory Empty.\n";
                break;
            }

            cout << "\nID\tName\tQty\tPrice\n";

            for(i = 0; i < n; i++) {
                cout << p[i].id << "\t"
                     << p[i].name << "\t"
                     << p[i].quantity << "\t"
                     << p[i].price << endl;
            }
            break;

        case 3:
            cout << "Enter Product ID to Search: ";
            cin >> id;

            found = 0;

            for(i = 0; i < n; i++) {
                if(p[i].id == id) {
                    cout << "\nProduct Found\n";
                    cout << "Name: " << p[i].name << endl;
                    cout << "Quantity: " << p[i].quantity << endl;
                    cout << "Price: " << p[i].price << endl;
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                cout << "Product Not Found.\n";

            break;

        case 4:
            cout << "Enter Product ID: ";
            cin >> id;

            found = 0;

            for(i = 0; i < n; i++) {
                if(p[i].id == id) {
                    cout << "Enter New Quantity: ";
                    cin >> p[i].quantity;

                    cout << "Quantity Updated.\n";
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                cout << "Product Not Found.\n";

            break;

        case 5:
            cout << "Enter Product ID to Delete: ";
            cin >> id;

            found = 0;

            for(i = 0; i < n; i++) {
                if(p[i].id == id) {

                    for(int j = i; j < n - 1; j++) {
                        p[j] = p[j + 1];
                    }

                    n--;
                    found = 1;

                    cout << "Product Deleted.\n";
                    break;
                }
            }

            if(found == 0)
                cout << "Product Not Found.\n";

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