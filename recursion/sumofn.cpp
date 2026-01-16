#include <bits/stdc++.h>
using namespace std;

//---------------BRUTE FORCE-----------------------

// int sumofN(int n){
//     int sum = 0;

//     for(int i=1; i<=n; i++){
//         sum+=i;
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cin>>n;

//     cout<<sumofN(n);

// }

//---------------------USING FORMULA--------------------------

// int sumofN(int n){
//     return (n*(n+1)) / 2;
// }

// int main(){
//     int n;
//     cin>>n;

//     cout<<sumofN(n);

// }


//---------------------Recursive Approach------------------------------

int sumofN(int n){
    if(n==1) return 1;

    return n + sumofN(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<sumofN(n);

}
