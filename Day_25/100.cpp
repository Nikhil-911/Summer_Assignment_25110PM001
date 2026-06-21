//C++ program to sort an array of strings based on their lengths
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n;
    cout<<"enter number of words: ";
    cin>>n;

    char words[n][50];

    cout<<"enter words: ";
    for(int i=0;i<n;i++){
        cin>>words[i];
    }

    char temp[50];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strlen(words[i])>strlen(words[j])){
                strcpy(temp,words[i]);
                strcpy(words[i],words[j]);
                strcpy(words[j],temp);
            }
        }
    }
    cout<<"\nwords sorted by length:\n";
    for(int i=0;i<n;i++){
        cout<<words[i]<<endl;
    }

    return 0;

}