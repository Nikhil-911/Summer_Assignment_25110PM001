//C++ program to find the factorial of a number using a function
#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;

}
int main(){
    int num;
    cout<<"enter number which you want factorial: ";
    cin>> num;
    cout<<"factorial of "<< num <<"is: "<< factorial(num)<<endl;
    return 0;
}