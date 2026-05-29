//  code written in C++ to count digits in a number

#include <iostream>
using namespace std;

int main(){
    int n, count=0;
    cout<<"enter n: ";
    cin>>n;

    while (n%10!=0){
    n=n/10;
    count++;
    }
    cout<<"numbers in the digits are: " << count << endl;
    return 0;

}