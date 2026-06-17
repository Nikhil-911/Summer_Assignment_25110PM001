//C++ program to find the length of a string without using built-in functions
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"enter a string: ";
    getline(cin,str);
    int count =0;
    for(char ch:str){
        count++;
    }
    cout<<"length of string is: "<<count<<endl;
    return 0;
}