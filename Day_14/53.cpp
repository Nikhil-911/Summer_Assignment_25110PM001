//C++ program to search an element in an array using linear search
#include <iostream>
using namespace std;
int main(){
    int n,pos=0,target;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];

    cout<<"enter array element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter value you want to search";
    cin>>target;

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"the entered value is found at index"<<pos<<endl;
        }
        pos++;
    }
    return 0;

}