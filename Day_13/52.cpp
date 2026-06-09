//C++ program to count the number of even and odd elements in an array
#include <iostream>
using namespace std;
int main(){
    int n;
    int count_even=0;
    int count_odd=0;
    cout<<"enter number of elements in array: ";
    cin>>n;

    int arr[n];

    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        if(arr[i]%2==0)
            count_even++;
        else
            count_odd++;
    }
    cout<<"number of even elements: "<<count_even<<endl;
    cout<<"number of odd elements: "<<count_odd<<endl;

    
}