#include <bits/stdc++.h>
using namespace std;


//--------------BRUTE FORCE-----------------------
// int main(){
//     int n;
//     cin>>n;
    
//     int cnt = 0;
//     for(int i=1; i<=n; i++){
//         if(n%i==0){
//             cnt++;
//         }
//     }

//     if(cnt==2){
//         cout<<"prime number";
//     }
//     else{
//         cout<<"not a prime number";
//     }
// }

//--------------OPTIMAL APPROACH-----------------------
int main(){
    int n;
    cin>>n;
    
    int cnt = 0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            cnt++;

            // If n is not a perfect square, count its reciprocal factor
            if (n / i != i) {
                cnt++;
            }
        }
    }

    if(cnt==2){
        cout<<"prime number";
    }
    else{
        cout<<"not a prime number";
    }
}