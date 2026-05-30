// C++ program to find GCD of two numbers using Euclidean algorithm
#include <iostream> 
using namespace std;

int main(){
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;

    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }

    cout<<"GCD= "<<a;

    return 0;
    
    
}