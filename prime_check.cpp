// Program: Check whether a number is prime
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = (n > 1);
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << n << " is prime" << endl;
    else
        cout << n << " is not prime" << endl;
    return 0;
}
