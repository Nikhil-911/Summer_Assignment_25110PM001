//C++ program to check if two strings are rotation of each other
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str1[100],str2[100];

    cout<<"enter first string: ";
    cin.getline(str1,100);

    cout<<"enter second string: ";
    cin.getline(str2,100);

    if(strlen(str1)!=strlen(str2)){
        cout<<"not rotation";
        return 0;
    }

    char temp[200];
    strcpy(temp,str1);
    strcat(temp,str1);

    if(strstr(temp,str2)){
        cout<<"rotation";
    }else{
        cout<<"not rotation";
    }
    return 0;
}