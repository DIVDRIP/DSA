#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     // Function to reverse an array
//     vector<int> reverseArray(vector<int>& arr) {
//         // Get the size of the array
//         int n = arr.size();

//         // Create a new vector to store the reversed array
//         vector<int> ans(n);

//         // Loop through the array from start to end
//         for (int i = 0; i < n; i++) {
//             // Place the element from end of arr into beginning of ans
//             ans[i] = arr[n - 1 - i];
//         }

//         // Return the reversed array
//         return ans;
//     }
// };

// // Driver code
// int main() {
//     // Input array
//     vector<int> arr = {1, 2, 3, 4, 5};

//     // Create object of Solution class
//     Solution obj;

//     // Call the reverseArray function
//     vector<int> result = obj.reverseArray(arr);

//     // Print the reversed array
//     cout << "Reversed Array: ";
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }



//-----------------Built-in-Function-----------------------

class Solution {
public:
    // Function to reverse the array using STL reverse function
    void reverseArray(vector<int>& arr) {
        // Use STL reverse to reverse array in-place
        reverse(arr.begin(), arr.end());
    }
};

// Driver code
int main() {
    // Input array
    vector<int> arr = {1, 2, 3, 4, 5};

    // Create Solution object
    Solution obj;

    // Call function to reverse the array
    obj.reverseArray(arr);

    // Output the reversed array
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
