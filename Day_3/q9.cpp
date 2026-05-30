// C++ program to check whether a number is prime or not
#include <iostream> 
using namespace std;

int main(){
    int n,i;
    bool prime= true;
    cout<<"enter the number: ";
    cin>>n;
    if(n<=1){
        cout<<"number is not prime";
    }else
    for(i=2;i<n;i++){
        if(n%i==0){
            prime=false;
            break;
        }
        }
        if (prime){
        cout<<"number is prime" << endl;
        }else{
        cout<<"number is not prime" << endl;
    }
    return 0;
}