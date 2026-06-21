//C++ program to merge two sorted arrays
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;

    cout<<"enter first array: ";
    cin>>n;
    vector<int> a(n); 

    cout<<"enter first sorted array element: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"enter second array: ";
    cin>>m;
    vector<int> b(m); 

    cout<<"enter first sorted array element: ";
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    vector<int> merged;
    int i=0,j=0;

    while(i<n && j<m){
        if(a[i]<=b[j]){
            merged.push_back(a[i]);
            i++;
        }else{
            merged.push_back(b[j]);
            j++;
        }
    }
    while(i<n){
        merged.push_back(a[i]);
        i++;
    }

    while(j<m){
        merged.push_back(b[j]);
        j++;
    }

    cout<<"\nmerged array: ";
    for(int x:merged){
        cout<<x<<" ";
    }

    return 0;

}