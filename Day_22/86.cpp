//C++ program to count the number of words in a string
#include <iostream>
using namespace std;
int main(){
    int spaces=0,full=0;
    char str[100];
    cout<<"enter the string: ";
    cin.getline(str,100);

    for(int i=0;i<str[i]!='\0';i++){
        
        if(str[i]== ' '){
            spaces ++;

        }else{
            full++;
        }
    }
    cout<<"number of words: "<<full<<endl;

    return 0;
}