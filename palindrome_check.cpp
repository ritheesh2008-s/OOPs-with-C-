// Program: Check whether a string is a palindrome
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a word: ";
    cin >> s;

    bool isPalindrome = true;
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << s << " is a palindrome" << endl;
    else
        cout << s << " is not a palindrome" << endl;
    return 0;
}
