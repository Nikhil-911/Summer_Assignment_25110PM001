// C++ program to calculate power of a number
#include <iostream>
using namespace std;
int main(){
    int x,n;
    cout<<"enter a number: ";
    cin>>x;
    cout<<"enter the power of number: ";
    cin>>n;

    long long result = 1;
    for(int i=1;i<=n;i++){
        result*=x;
    }

    cout<<result<<endl;
    return 0;


}