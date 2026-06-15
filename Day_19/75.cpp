//C++ program to transpose a matrix
#include <iostream>
using namespace std;
int main(){
    int rows,cols;

    cout<<"enter number of rows: ";
    cin>>rows;

    cout<<"enter number of columns: ";
    cin>>cols;

    int arr[rows][cols];

    cout<<"enter matrix elements: \n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j];
        }
    }
    cout<<"\n transpose matrix: \n";
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}