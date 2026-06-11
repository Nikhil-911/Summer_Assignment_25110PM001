//C++ program to reverse an array 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int arr[n];

    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for (int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<"is the reverse of the array"<<endl;
    return 0;
}