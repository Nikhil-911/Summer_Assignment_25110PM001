//C++ program to rotate an array by one position towards left
#include <iostream>
using namespace std;
int main(){
    int n;

    cout<<"enter array size: :";
    cin>>n;
    int arr[n];

    cout<<"enter array element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int first = arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}