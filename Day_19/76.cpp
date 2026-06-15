//C++ program to find sum of diagonal elements of a matrix
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of diagonal matrix: ";
    cin>>n;

    int arr[n][n];

    cout<<"enter matrix element: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i][i];
    }

    cout<<"diagonal sum = "<<sum;

    return 0;
}