//C++ program to search an element in an array using linear search 
#include <iostream>
using namespace std;
int main(){
    int n,count=0,target;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];

    cout<<"enter array element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter the value you want to check frequency: ";
    cin>>target;
    for(int i=0;i<n;i++){
        if (arr[i]== target){
            count++;
        }

        
    }

    cout << "element " << target << " occur " << count << " times"<<endl;
    return 0;
}