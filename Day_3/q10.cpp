// C++ program to print all prime numbers between two given numbers
#include <iostream> 
using namespace std;

int main() {
    int start, end;
    cout<<"enter starting number: ";
    cin>>start;

    cout<<"enter second number: ";
    cin>>end;

    cout<<"prime numbers are:\n";

    for(int i=start; i<=end; i++){
        int count=0;

        if(i<=1)
        continue;

        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if (count==0){
            cout<<i<<" "<<endl;
        }
    }
    return 0;

}