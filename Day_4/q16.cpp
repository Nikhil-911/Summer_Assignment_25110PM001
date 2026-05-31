// C++ program to Print Armstrong numbers in a range
#include <iostream>
using namespace std;

int main(){
    int start,end;
    cout<<"enter starting digit: ";
    cin>>start;
    cout<<"enter ending digit: ";
    cin>>end;

    cout<<"armstrong numbers are: ";
    for(int i=start;i<=end;i++){
        int n=i;
        int sum=0,digit;

        while(n>0){
            digit=n%10;
            sum=sum+(digit*digit*digit);
            
            n=n/10;
        }
        if(sum==i){
            cout<<i<<" ";
        }

    }
    return 0;

}