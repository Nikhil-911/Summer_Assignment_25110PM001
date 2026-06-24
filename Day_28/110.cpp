// C++ program to implement a simple Bank Account System
#include <iostream>
#include <string>
using namespace std;

class Bank {
private:
    int accNo;
    string name;
    float balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accNo;

        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!\n";
    }

    void deposit() {
        float amount;

        cout << "Enter Amount to Deposit: ";
        cin >> amount;

        balance += amount;

        cout << "Amount Deposited Successfully.\n";
        cout << "Current Balance: " << balance << endl;
    }

    void withdraw() {
        float amount;

        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient Balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrawal Successful.\n";
            cout << "Current Balance: " << balance << endl;
        }
    }

    void checkBalance() {
        cout << "Current Balance: " << balance << endl;
    }

    void displayDetails() {
        cout << "\n----- Account Details -----\n";
        cout << "Account Number : " << accNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main() {
    Bank b;
    int choice;

    do {
        cout << "\n===== BANK ACCOUNT SYSTEM =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Display Account Details\n";
        cout << "6. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                b.createAccount();
                break;

            case 2:
                b.deposit();
                break;

            case 3:
                b.withdraw();
                break;

            case 4:
                b.checkBalance();
                break;

            case 5:
                b.displayDetails();
                break;

            case 6:
                cout << "Thank You for Using the System.\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}