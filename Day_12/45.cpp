//C++ program to check if a number is palindrome or not
#include <iostream>
using namespace std;
bool isPalindrome(int n){
    int origional=n;
    int rev =0;
    while(n>0){
        int digit=n%10;
        rev =rev*10+digit;
        n/=10;
    }
    return origional==rev;
}
int main(){
    int num;
    cout<<"enter number which you want to check palindrome: ";
    cin>> num;
    if(isPalindrome(num)){
        cout<< num <<" is a palindrome number." <<endl;
    }else{
        cout<< num <<" is not a palindrome number." << endl;
    return 0;
    }
}