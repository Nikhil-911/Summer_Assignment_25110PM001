//C++ program to check if a person is eligible for voting or not
#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age: ";
    cin>>age;
    if(age<0){
        cout<<"enter valid age of person."<<endl;
        return 1;
    }else if(age>=18){
        cout<<"person eligible for vote."<<endl;
    }else{
        cout<<"person is not eligible for voting."<<endl;
    }
    
    return 0;
}