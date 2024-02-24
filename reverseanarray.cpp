#include <iostream>
using namespace std;


//Funcion for reversing array
void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


//Function to print reversed array
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){
    int arr[6]  = {1, 5, 8, 5, -5, 63};
    int brr[5] = {2, -4, 4, -8, 5};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}