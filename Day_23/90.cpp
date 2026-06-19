//C++ program to find first repeating character in a string
#include <iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"enter a string: ";
    cin.getline(str,100);

    for(int i=0;str[i]!='\0';i++){
        int count =0;

        for(int j=0;str[j]!='\0';j++){
            if(str[i]==str[j])
            count++;
        }

        if(count>1){
            cout<<"first repeating character is: "<<str[i]<<endl;
            return 0;
        }
    }
    cout<<"no repeating character found."<<endl;
    return 0;
}