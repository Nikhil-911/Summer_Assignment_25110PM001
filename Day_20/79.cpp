//C++ program to find row wise sum of matrix
#include <iostream>
using namespace std;
int main(){
    int c,r;
    cout<<"enter rows of matrix: ";
    cin>>r;
    cout<<"enter column of matrix: ";
    cin>>c;

    int A[r][c];

    cout<<"enter matrix element: \n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>A[i][j];
        }
    }

    cout<<"row wise sum: \n";
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=A[i][j];
        }

        cout<<"row "<<i+1 <<"sum = "<<sum<<endl;   
    }

    return 0;


}