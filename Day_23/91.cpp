//C++ program to check whether two strings are anagrams or not
#include <iostream>
using namespace std;
int main(){
    char str1[100];
    cout<<"enter a first string: ";
    cin.getline(str1,100);

    char str2[100];
    cout<<"enter a second string: ";
    cin.getline(str2,100);

    int len1=0,len2=0;

    while(str1[len1]!='\0')len1++;
    while(str2[len2]!='\0')len2++;

    if(len1 != len2){
        cout<<"not anagram";
        return 0;
    }

    bool anagram = true;
 
    for(int i=0;i<len1;i++){
        int count1=0,count2=0;
    
   
    for(int j=0;j<len1;j++){
        if(str1[i]==str1[j]) count1++;
        if(str1[i]==str2[j]) count2++;
        }
    

        if(count1 != count2){
        anagram =false;
        break;
        }
    }
    if(anagram){
        cout<<"strings are anagrams";
    }else{
        cout<<"strings are not anagrams";
    }

    return 0;

}