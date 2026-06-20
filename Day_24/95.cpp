//C++ program to find the longest word in a string
#include <iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"enter a string: ";
    cin.getline(str,100);
    int maxLen=0,len=0;
    int start=0,maxStart=0;

    for(int i=0;str[i]!='\0';i++){
        if(str[i] != ' ' && str[i] != '\0'){
            len++;

            if(len>maxLen){
                maxLen=len;
                maxStart=start;

            }
            len=0;
            start=i+1;

        }

        if(str[i]=='\0'){
            break;
        }

        cout<<"longest word: ";
        for(int i=maxStart;i<maxStart+maxLen;i++){
            cout<<str[i];
        }


    }
    cout<<"\nlength: "<<maxLen;
    return 0;


}