// C++ program to find prime factors of anumber
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;

    cout<<"prime factors are: ";
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
    }
    return 0;
}