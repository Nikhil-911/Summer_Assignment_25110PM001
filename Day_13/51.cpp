//C++ program to demonstrate the use of variable length array
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"enter number of element in array";
    cin>>n;
    int arr[n];

    cout<<"enter array element: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int smallest=INT_MAX;
    int largest=INT_MIN;

    for(int i=0;i<n;i++){

        if(arr[i]<smallest)
            smallest=arr[i];

        if(arr[i]>largest)
            largest=arr[i];

        
    }
    cout<<"smallest= "<< smallest <<endl;
    cout<<"largest= "<< largest<<endl;

    return 0;



}