//C++ program to find fibonacci of a number using recursion
#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n<=1)
    return n;

    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

    cout<<"the fibonacci of " <<n << "is: " << fibonacci(n);
    return 0;

}