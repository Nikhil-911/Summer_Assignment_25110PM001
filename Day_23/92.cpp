//C++ program to find the most repeating character in a string
#include <iostream>
using namespace std;
int main(){
    char str[100];
    int maxCount=0;
    char maxchar;
    
    cout<<"enter a string: ";
    cin.getline(str,100);

    for (int i=0;str[i]!='\0';i++){
        int count=0;

        for(int j=0;str[j]!='\0';j++){
            if(str[i]==str[j])
            count++;
        }

        if(count>maxCount){
            maxCount=count;
            maxchar=str[i];
        }
    }

    cout<<"most repeating character: "<<maxchar<<endl;
    cout<<"frequency: "<<maxCount;
  
    return 0;

}