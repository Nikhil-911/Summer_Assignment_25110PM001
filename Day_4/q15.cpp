//C++ program to Check Armstrong number
#include <iostream>
using namespace std;

int main(){
    int n,origional,digit,sum=0;
    cout<<"enter a number: ";
    cin>>n;

    origional=n;
    while(n>0){
        digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
    }
    if(sum==origional)
    cout<<"armstrong number";
    else
    cout<<"not armstrong number";

    return 0;

}