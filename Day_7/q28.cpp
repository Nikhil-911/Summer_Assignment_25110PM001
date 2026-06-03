//C++ program to reverse a number using recursion
#include <iostream>
using namespace std;
int rev=0;
int reverseNumber(int n){
    if(n==0)
    return rev;

    rev=rev*10 + n%10;
    return reverseNumber(n/10);
}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    cout<<"reverse of the number " << n <<"is "<< reverseNumber(n);
    return 0;
}