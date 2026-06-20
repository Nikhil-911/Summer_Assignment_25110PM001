//C++ program to remove duplicate characters from a string
#include <iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"enter a string: ";
    cin.getline(str,100);

    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!='\0';j++)
        if(str[i]==str[j]){
            for(int k=j;str[k]!='\0';k++){
                str[k]=str[k+1];
            }
            j--;
        }

    }

    cout<<"after removing duplicates: "<<str;

    return 0;
}