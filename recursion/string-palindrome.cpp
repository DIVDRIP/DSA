#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


//------------------Using Two Pointers-------------------------

// int main() {
//     string s;
//     cout << "Enter a string: ";
//     cin >> s;   // reads a single word (no spaces)

//     int left = 0;
//     int right = s.length() - 1;

//     bool isPalindrome = true;

//     while (left < right) {
//         if (s[left] != s[right]) {
//             isPalindrome = false;
//             break;
//         }
//         left++;
//         right--;
//     }

//     if (isPalindrome)
//         cout << "Palindrome";
//     else
//         cout << "Not a Palindrome";

//     return 0;
// }



//----------------Using reverse() function--------------


int main() {
    string s;
    cin >> s;

    string rev = s;
    reverse(rev.begin(), rev.end());

    if (s == rev)
        cout << "Palindrome";
    else
        cout << "Not a Palindrome";

    return 0;
}