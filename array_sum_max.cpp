// Program: Find the sum and the largest element of an array
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0, maxVal = arr[0];
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Largest element = " << maxVal << endl;
    return 0;
}
