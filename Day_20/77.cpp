//C++ program to multiply two matrices
#include  <iostream>
using namespace std;
int main(){
    int r1,r2,c1,c2;
    cout<<"enter rows of first matrix: ";
    cin>>r1;
    cout<<"enter column of first matrix: ";
    cin>>c1;

    cout<<"enter rows of second matrix: ";
    cin>>r2;
    cout<<"enter column of second matrix: ";
    cin>>c2;

    if(c1!=r2){
        cout<<"multiplication not possible! ";
        return 0;
    }

    int A[r1][c1],B[r2][c2],C[r1][c2];

    cout<<"enter first matrix element: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }

    cout<<"enter second matrix element: ";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            C[i][j]=0;
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    cout<<"result matrix: \n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}