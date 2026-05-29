// C++ program to find sum of all digits of a number
#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    cout<<"plese enter a number: ";
    cin>>n;

    while(n!=0){
        sum=sum+(n%10);
        n=n/10;
        
    }
    cout<<"sum of the each digit of number is "<< sum << endl;
    return 0;


}