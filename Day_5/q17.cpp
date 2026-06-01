// C++ program to check whether a number is perfect or not
#include <iostream>
using namespace  std;
int main (){
    int n,sum=0;
    cout<<"enter number: ";
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"number is perfect "<<endl;
    }else{
        cout<<"number is not perfect"<< endl;
    }

    return 0;
    

}