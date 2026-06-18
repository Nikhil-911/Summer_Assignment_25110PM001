//C++ program to check whether a string is palindrome or not
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str,rev=" ";
    cout<<"enter a string: ";
    getline(cin,str);

    bool palindrome = true;


    for(int i=str.length()-1;i>=0;i--){
        rev+=str[i];
    }
    if(str==rev){
        cout<<"string is palindrome";
    }else{
        cout<<"string is not palindome";
    }
    return 0;
}