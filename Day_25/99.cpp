//C++ program to sort an array of strings in alphabetical order
#include <iostream>
#include <cstring>
using namespace std;
int main(){

    int n;
    cout<<"enter number of names: ";
    cin>>n;

    char names[n][50];

    cout<<"enter names: \n";
    for(int i=0;i<n;i++){
        cin>>names[i];
    }

    char temp[50];

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(names[i],names[j])>0){
                strcpy(temp ,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }
    cout<<"\nnames in alphabetical order:\n";
    for(int i=0;i<n;i++){
        cout<<names[i]<<endl;
    }

    cout<<endl;
}