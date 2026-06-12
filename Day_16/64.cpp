// C++ program to remove duplicates from an array
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
    cout<<"after removing duplicates: ";
    for(int i=0;i<n;i++){
        bool duplicate=false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                duplicate=true;
                break;
                
            }
        }
        if(!duplicate){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
    

}