#include <bits/stdc++.h>
using namespace std;



//--------------------BRUTE FORCE-----------------------

// int main() {
//     int n1, n2;
//     cin>>n1;
//     cin>>n2;

//     int gcd = 1;

//     for(int i=1; i<=min(n1, n2); i++){
//         if(n1%i==0 && n2%i==0){
//             gcd = i;
//         }
//     }

//     cout<<gcd;

// }

//--------------------BETTER APPROACH-----------------------

// int main() {
//     int n1, n2;
//     cin>>n1;
//     cin>>n2;


//     for(int i=min(n1, n2); i>0; i--){
//         if(n1%i==0 && n2%i==0){
//             cout<<i;
//             break;
//         }
//     }


// }

//-------------------------OPTIMAL APPROACH----------------------------------

// Euclidean Algorithm:

// The Euclidean Algorithm is a method for finding the greatest common divisor (GCD)
// of two numbers. It operates on the principle that the GCD of two numbers remains
// the same even if the smaller number is subtracted from the larger number.

int main() {
    int n1, n2;
    cin>>n1;
    cin>>n2;


    while(n1>0 && n2>0){
        if(n1>n2){
            n1 = n1 % n2;
        }
        else{
            n2 = n2 % n1;
        }
    }

    if(n1==0){
        cout<<n2;
    }
    else{
        cout<<n1;
    }


}

