// An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = n;
    int sum = 0;

    // Count number of digits
    int k = to_string(n).length();

    // Special case for 0
    if (n == 0) {
        cout << "number is armstrong";
        return 0;
    }

    while (num > 0) {
        int ld = num % 10;
        sum += (int)round(pow(ld, k));  // safe conversion
        num /= 10;
    }

    if (sum == n) {
        cout << "number is armstrong";
    } else {
        cout << "not a armstrong number";
    }

    return 0;
}
