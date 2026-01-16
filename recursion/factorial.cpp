#include <bits/stdc++.h>
using namespace std;


// int factorial(int n){
//     int ans = 1;

//     for(int i=1; i<=n; i++){
//         ans = ans*i;
//     }

//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;

//     int res = factorial(n);

//     cout<<res;

// }


//-------------------Recursive Solution----------------------------

#include <bits/stdc++.h>
using namespace std;

// Recursive function to calculate factorial of a number
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }

    // Recursive case: n * factorial of (n-1)
    return n * factorial(n - 1);
}

int main() {
    // Define the number to compute factorial
    int n = 4;

    // Call the factorial function and print the result
    cout << factorial(n) << endl;

    return 0;
}
