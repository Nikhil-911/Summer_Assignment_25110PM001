//C++ program to implement a simple ATM machine
#include <iostream>
using namespace std;
int main(){ 
    int pin=1234,enteredPin;
    double balance=10000;
    int choice;
    double amount;

    cout<<"entered PIN: ";
    cin>>enteredPin;

    if(enteredPin!=pin){
        cout<<"Invalid pin!";
        return 0;
    }
    do{
        cout<<"\n-----ATM MENU-----\n";
        cout<<"1. check deposit\n";
        cout<<"2. deposit\n";
        cout<<"3. withdraw\n";
        cout<<"4. exit\n";
        cin>>choice;

        switch(choice) {
            case 1:
                cout<<"balance: Rs. "<<balance<<endl;
                break;
            case 2:
                cout<<"enter amount to be deposit: ";
                cin>>amount;
                balance+=amount;
                cout<<"deposit successfully\n";
                break;
            case 3:
                cout<<"enter amount to withdraw: ";
                cin>>amount;
                if(amount<=balance){
                    balance-=amount;
                    cout<<"deposit successfully\n";
                }else{
                    cout<<"insufficient balance\n";
                }
                break;
            case 4:
                cout<<"thank you!\n";
                break;
            default:
                cout<<"invalid choice\n";

        }

    }while (choice!=4);

    return 0;
    
        
    
    
}