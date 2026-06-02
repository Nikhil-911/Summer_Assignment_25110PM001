// C++ program to count set bits in a number
#include <iostream>
using namespace std;

int main(){
    int n,count=0;
    cout<<"enter a number: ";
    cin>>n;

    while(n>0){
        if(n&1)
            count++;
        n=n>>1;
    }
    cout <<"set bits: "<< count <<endl;
    return 0;
}