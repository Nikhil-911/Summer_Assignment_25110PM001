//C++ program to find column wise sum of matrix
#include <iostream>
using namespace std;
int main(){
    int c,r;
    cout<<"enter rows of matrix: ";
    cin>>r;
    cout<<"enter column of matrix: ";
    cin>>c;

    int A[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>A[i][j];
        }
    }

    cout<<"column wise sum: \n";
    for(int j=0;j<c;j++){
        int sum=0;
        for(int i=0;i<r;i++){
            sum+=A[i][j];
        }

        cout<<"column "<<j+1 <<"sum = "<<sum<<endl;   
    }
    return 0;

}