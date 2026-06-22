//C++ program to implement a simple number guessing game
#include <iostream>
using namespace std;
int main(){
    int secret=55;
    int guess;
    do{
        cout<<"entered the guess number between(1-100): ";
        cin>>guess;
        if(guess>secret)
        cout<<"too high!";
        else if(guess<secret)
        cout<<"too low";
    }while(guess!=secret);
    cout<<"correct guess!";
    return 0;
}