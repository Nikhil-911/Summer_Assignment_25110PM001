//C++ program to check whether a matrix is symmetric or not
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter order of matrix";
    cin>>n;

    int A[n][n];

    cout<<"enter matrix element: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    bool symmetric = true;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(A[i][j]!=A[j][i]){
                symmetric=false;
                break;

            }
        }
    }

    if(symmetric){
        cout<<"symmetric matrix";
    }else{
        cout<<"not symmetric matrix";
    }

    return 0;
}