#include <bits/stdc++.h>
using namespace std;


//---------------BRUTE FORCE APPROACH-----------------------

// int main(){
//     int n;
//     cin>>n;

//     for(int i = n; i>0; i--){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }


//-----------------FORWARD RECURSION---------------------

// void printNumbers(int n){
//     if(n<1) return;

//     cout<<n<<" ";

//     printNumbers(n-1);
// }

// int main(){
//     int n;
//     cin>>n;

//     printNumbers(n);
// }

//-----------------BACKTRACKING---------------------

class Solution {
public:
    // Recursive function to print numbers from current down to 1 using backtracking
    void printNumbers(int current) {
        // Base case: if current is less than 1, stop recursion
        if (current < 1)
            return;

        // Recursive call with previous number
        printNumbers(current - 1);

        // Print current number during backtracking
        cout << current << " ";
    }
};
 
int main() {
    Solution sol;
    int n = 10;

    sol.printNumbers(n);
    cout << "\n";

    return 0;
}