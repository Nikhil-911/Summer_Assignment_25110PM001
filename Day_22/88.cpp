//C++ program to remove spaces from a string
#include <iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"enter a string";
    cin.getline(str,100);
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[j]=str[i];
        }

    }
    str[j]='\0';

    cout<<"string without spaces: "<<str;

    return 0; 

}