//C++ program to find first non-repeating character in a string
#include <iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"enter a string";
    cin.getline(str,100);

    for (int i=0;str[i]!='\0';i++){
        int count=0;

        for(int j=0;str[j]!='\0';j++){
            if(str[i]==str[j])
            count++;
        }

        if(count==1){
            cout<<"first non-repeating character: "<<str[i];
            return 0;
        }
    }
    cout <<"no non-repeating character found. ";
    return 0;

    
}