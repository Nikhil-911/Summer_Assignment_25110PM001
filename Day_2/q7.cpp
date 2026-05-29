// write a program to find product of all digits of a  number
#include <iostream>
using namespace std;

int main(){
    int n,mul=1;
    cout<<"enter the number: ";
    cin>>n;
    while(n>0){
        mul=mul*(n%10);
        n=n/10;
    }
    cout<<"the product of all number of digit is "<< mul<< endl;
    return 0;
}