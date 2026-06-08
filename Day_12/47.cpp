//C++ program to print fibonacci series upto n terms
#include <iostream>
using namespace std;
void fibonacci(int n){
    int first=0,second=1,next;
    cout<<"fibonacci series: ";
    for(int i=1;i<=n;i++){
        cout<<first <<" ";
        next=first=second;
        second=next;
    }
}
int main(){
    int n;
    cout<<"enter number of terms: ";
    cin>>n;
    fibonacci(n);
    return 0;
}