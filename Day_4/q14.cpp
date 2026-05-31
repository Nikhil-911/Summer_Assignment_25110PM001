//C++ program to Find nth Fibonacci term
#include <iostream>
using namespace std;

int main(){
    int n,a=0,b=1,c;
    cout<<"enter n: ";
    cin>>n;

    if(n==1){
        cout<<a;
    }
    else if(n==2){
        cout<<b;
    }
    else{
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        cout<<"nth fibonacci Number: "<<c<< endl;
    }
}