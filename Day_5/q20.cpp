// C++ program to find largest prime factor of a number
#include <iostream>
using namespace std;
int main() {
    int n,largest;
    cout<<"enter number: ";
    cin>>n;

    for(int i=2;i<=n;i++){
        if(n%i==0){
            largest=i;
            n=n/i;

        }
    }
    cout<<"largest prime factor = "<<largest<<endl;
    return 0;
}