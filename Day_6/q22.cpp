// C++ program to convert binary to decimal number
#include <iostream>
using namespace std;
int main(){
    long long binary;
    int decimal=0,base=1,rem;

    cout<<"enter a binary number: ";
    cin>>binary;

    while(binary>0){
        rem=binary%10;
        decimal+=rem*base;
        base*=2;
        binary/=10;
    }
    cout<<"decimal = "<< decimal<<endl;
    return 0;
}