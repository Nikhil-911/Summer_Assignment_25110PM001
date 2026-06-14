//C++ program to selection sort an array
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int arr[n];

    cout<<"enter array element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        int smallestIdex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIdex]){
                smallestIdex=j;
            }
            swap(arr[smallestIdex],arr[i]);
        }
    }
    cout<<"sorted array: "<<" ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}