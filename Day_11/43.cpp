//C++ program to check whether a number is prime or not using a function
#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        
        }
        return true;
        
        
}

    int main(){
    int num;
    cout<<"enter number which you want to check prime or not: ";
    cin>>num;
    if(isPrime(num))
        cout<<"number is prime"<<endl;
    else
        cout<<"number is not prime"<<endl;
    return 0;
}