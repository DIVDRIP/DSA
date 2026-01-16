#include <bits/stdc++.h>
using namespace std;


/*MULTIPLE RECURSION CALL*/
// Multiple recursion occurs when a single function call triggers more than one subsequent recursive call, creating a tree-like structure of calls (like in Fibonacci), contrasting with single recursion where only one call happens, and is distinct from mutual recursion where different functions call each other.

// The Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones, starting with 0 and 1: 0, 1, 1, 2, 3, 5, 8, 13, 21, and so on, extending infinitely.

//------------------BRUTE FORCE APPROACH-----------------------------


// int main(){
//     int n;
//     cin>>n;

//     // Edge case: if n is 0, print only 0
//     if (n==0){
//         cout<<0;
//     }

//     // Special case: if n is 1, print first two Fibonacci numbers
//     else if (n==1){
//         cout<< 0 <<" "<< 1 << "\n";
//     }

//      // General case: generate and print Fibonacci series up to nth term
//      else {
//         int fib[n+1];
//         fib[0] = 0;
//         fib[1] = 1;

//         // Fill the Fibonacci series using bottom-up dynamic programming
//         for (int i = 2; i <= n; i++) {
//             fib[i] = fib[i - 1] + fib[i - 2];
//         }

//         cout << "The Fibonacci Series up to " << n << "th term:" << endl;
//         for (int i = 0; i <= n; i++) {
//             cout << fib[i] << " ";
//         }
//      }
//      return 0;
// }

//------------------BETTER APPROACH-----------------------------

int main() {
    int n = 5;

    // If n is 0, only the first Fibonacci number is printed
    if (n == 0) {
        cout << "The Fibonacci Series up to " << n << "th term:" << endl;
        cout << 0;
    }
    else {
        int secondLast = 0; // (i-2)th term
        int last = 1;       // (i-1)th term

        cout << "The Fibonacci Series up to " << n << "th term:" << endl;
        cout << secondLast << " " << last << " ";

        int cur; // ith term
        for (int i = 2; i <= n; i++) {
            cur = last + secondLast;   // ith Fibonacci number
            secondLast = last;         // move window forward
            last = cur;
            cout << cur << " ";
        }
    }

    return 0;
}



//------------------OPTIMAL APPROACH-----------------------------
// Recursive function to compute the Nth Fibonacci number

// int fibonacci(int N) {
//     // Base case: if N is 0 or 1, return N itself
//     if (N <= 1) {
//         return N;
//     }

//     // Recursive case: sum of (N-1)th and (N-2)th Fibonacci numbers
//     int last = fibonacci(N - 1);   // (N-1)th Fibonacci
//     int slast = fibonacci(N - 2);  // (N-2)th Fibonacci

//     return last + slast;
// }

// int main() {
//     int N = 4;
//     cout << fibonacci(N) << endl; // Output: 3 (0 1 1 2 3)
//     return 0;
// }