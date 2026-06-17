//C++ program to convert a string to uppercase without using built-in functions
#include <iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"enter a string: ";
    cin.getline(str,100);

    
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        if(ch>='a'&& ch<='z'){
            str[i]=str[i]-32;
        }
    }
    cout<<"uppercase string: "<< str<< endl;

    return 0;

}