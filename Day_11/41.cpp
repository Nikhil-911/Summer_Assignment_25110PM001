//C++ program to find the sum of two numbers using a function
#include <iostream>
using namespace std;
int sumN (int a,int b){
    int sum=0;
    sum=a+b;
    return sum;
}
   
    

int main(){
    int x,y;
    cout<<"enter a number: ";
    cin>>x;
    cout<<"enter another number: ";
    cin>>y;
        cout<<"sum of "<<x <<" and" << y <<" is: " <<sumN(x,y)<< endl;
        return 0;
}