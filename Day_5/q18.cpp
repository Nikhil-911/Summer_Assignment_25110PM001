// C++ program to check whether a number is strong or not 
#include <iostream>
using namespace std;
int main(){
    int n,origional,digit,fact,sum=0;

    cout<<"enter number: ";
    cin>>n;

    origional=n;
    while(n>0){
        digit=n%10;
        fact=1;
        for(int i=1;i<=digit;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==origional){
        cout<<"strong number"<<endl;
    }else{
        cout<<"not strong number"<<endl;
    }
    return 0;
}