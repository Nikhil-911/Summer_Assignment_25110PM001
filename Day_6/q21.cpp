// C++ program to convert decimal to binary number
#include <iostream>
using namespace std;
int main(){
    int decimal,binary=0,rem,pow=1;
    cout<<"enter decimal number: ";
    cin>>decimal;
    while(decimal>0){
        rem=decimal%2;
        binary=binary+(rem*pow);
        decimal=decimal/2;
        pow=pow*10;
    }
    cout<<"binary: "<< binary <<endl;
    return 0;
}