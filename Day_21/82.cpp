//C++ program to reverse a string without using built-in functions
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"enter a string: ";
    getline(cin,str);
    int rev =0;
    for(int i=str.length()-1;i>=0;i--){
        cout<<str[i];
        
    }

    return 0;
}