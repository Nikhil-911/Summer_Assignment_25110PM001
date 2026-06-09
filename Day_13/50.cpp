//C++ program to demonstrate the use of variable length array
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Average = " << (float)sum / n << endl;

    return 0;
}