//C++ program to count the number of vowels and consonants in a string
#include <iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"enter a string: ";
    cin.getline(str,100);

    int vowel=0,consonants=0;

    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        if((ch>='A'&& ch<='Z')||(ch>='a' && ch<='z')){
            if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vowel++;
            }else{
                consonants++;
            }
            cout<<"vowels: "<<vowel<<endl;
            cout<<"consonants: "<<consonants<<endl;

            return 0;
                
            
            
        }
    }

}