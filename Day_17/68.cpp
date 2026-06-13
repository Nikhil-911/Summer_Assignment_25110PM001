// C++ program to find common elements in two arrays
#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter first array size: ";
    cin>>n1;
    int arr1[n1];

    cout<<"enter first array element: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    cout<<"enter second array size: ";
    cin>>n2;
    int arr2[n2];


    cout<<"enter second array element: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    cout<<"comman elements are: ";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }

    return 0;

}