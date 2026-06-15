//C++ program to add two matrices
#include <iostream>
using namespace std;
int main(){
    int rows,cols;

    cout<<"enter number of rows: ";
    cin>>rows;

    cout<<"enter number of columns: ";
    cin>>cols;

    int A[rows][cols],B[rows][cols],sum[rows][cols];

    cout<<"\nenter element of matrix A: \n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>A[i][j];
        }
    }
    cout<<"\nenter element of matrix B: \n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>B[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            sum[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<"\nsum of matrices are: ";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}