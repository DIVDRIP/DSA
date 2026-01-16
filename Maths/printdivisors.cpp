#include <bits/stdc++.h>
using namespace std;


//--------------BRUTE FORCE--------------------

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }

//--------------OPTIMAL APPROACH--------------------

int main(){
    int n;
    cin>>n;

    vector<int> factors;

    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            factors.push_back(i);
            if (i != n / i) {
                factors.push_back(n/i);
            }
        }
    }

    sort(factors.begin(), factors.end());

    for(int x : factors){
        cout << x << " ";
    }

    cout<<endl;
}