//C++ program to rotate an array by one position towards right
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
    int j=0;
    for(int i=0; i<n;i++){
        if (arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }

    return 0;

}