//C++ program to demonstrate the use of variable length array
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    int arr[n];

    cout<<"enter array element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"array element are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}