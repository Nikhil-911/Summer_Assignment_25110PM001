// code written in C++ to find factorial of a given number

#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact=1;
    cout<<"enter number you want factorial: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"factorial of "<< n<<" is: "<<fact<<endl;
    return 0;
}