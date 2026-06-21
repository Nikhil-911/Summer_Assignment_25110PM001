//C++ program to count the frequency of each character in a string
#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        int count = 1;

        bool visited = false;
        for (int k = 0; k < i; k++) {
            if (str[i] == str[k]) {
                visited = true;
                break;
            }
        }

        if (visited)
            continue;

        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count > 1) {
            cout << str[i] << " is repeated " << count << " times" << endl;
        }
    }

    return 0;
}