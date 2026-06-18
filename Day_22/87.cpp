//C++ program to count the frequency of characters in a string
#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        int count = 1;

        if (str[i] == ' ')
            continue;

        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '*';   
            }
        }

        if (str[i] != '*')
            cout << str[i] << " = " << count << endl;
    }

    return 0;
}