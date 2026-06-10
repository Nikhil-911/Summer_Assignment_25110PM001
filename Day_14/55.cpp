//C++ program to find second largest element in an array
#include <iostream>
using namespace std;
int main(){
    int n,pos=0;
    cout<<"enter number of element in array: ";
    cin>>n;
    int arr[n];

    cout<<"enter array element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]>arr[pos]){
            pos=i;
        }
    }
    arr[pos]= -1;

    int largest =arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest =arr[i];
        }
    }
    cout<<"second largest = "<<largest;

    return 0;


}