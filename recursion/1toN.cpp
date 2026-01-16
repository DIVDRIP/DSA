#include <bits/stdc++.h>
using namespace std;

//--------------Forward Recursion-----------------------

// void printNumbers(int current, int n){
//     if (current>n) return;

//     //print current number

//     cout<<current<<" ";

//     printNumbers(current+1, n);
// }

// int main(){
//     int n;
//     cin>>n;

//     printNumbers(1, n);

// }

//---------------------------Backtracking----------------------------

void printNumbers(int current, int n){
    if (current>n) return;

    //print current number

    printNumbers(current+1, n);
    cout<<current<<" ";

    
}

int main(){
    int n;
    cin>>n;

    printNumbers(1, n);

}
