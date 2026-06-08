//C++ program to check whether a number is armstrong or not
#include <iostream>
using namespace std;

bool isArmstrong(int n){
    int origional=n;
    int sum=0;

    while(n>0){
        int digit =n%10;
        sum+=digit*digit*digit;
        n/=10;
    }
    return sum==origional;
}
int main(){
    int num;
    cout<<"enter number which you want check armstrong: ";
    cin>>num;

    if(isArmstrong(num))
        cout<<"Armstrong Number";
    else
    cout<<"not Armstrong Number";

    return 0;
}