//C++ program to find the maximum of two numbers using a function
#include <iostream>
using namespace std;
int maximum(int a,int b){
    if (a>b)
        return(a);
    else
        return(b);
}
int main(){
    int x,y;
    cout<<"enter first number: ";
    cin>>x;
    cout<<"enter second number: ";
    cin>>y;
    cout<<"maximum number is: "<< maximum(x,y)<<endl;
    return 0;

}