// C++ program to find pairs in an array whose sum is equal to a given sum
#include <iostream>
using namespace std;

int main() {
    int n, given_sum = 7;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == given_sum) {
                cout << "Pair is: "
                     << arr[i] << " " << arr[j] << endl;
            }
        }
    }

    return 0;
}