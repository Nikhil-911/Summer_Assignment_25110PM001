// C++ program to check if a number is palindrime or not    
#include <iostream>
using namespace std;

int main(){
    int n,original,rev=0;
    cout<<"enter a number: ";
    cin>>n;
    original=n;
    while (n>0){
        rev=rev*10+(n%10);
        n=n/10;
    }
    if(original==rev){
        cout<<"number is palindrome"<<endl;
    }
    else{
        cout<<"number is not palindrome"<<endl;
    }
    
    return 0;
}