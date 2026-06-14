//C++ program to search an element in a sorted array using binary search
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int val;
    cout << "Enter value to be searched: ";
    cin >> val;

    int st = 0;
    int end = n - 1;

    while(st <= end) {
        int mid = st + (end - st) / 2;

        if(arr[mid] == val) {
            cout << "Value found at index: " << mid;
            return 0;
        }
        else if(arr[mid] < val) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Value not found in array";
    return 0;
}