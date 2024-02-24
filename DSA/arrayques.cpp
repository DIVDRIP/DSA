//Swap Alternate arrays

/*#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
    int even[8] = {1, 5, 5, -6, -7, 1, 99, 3};
    int odd[5] = {5, 4, 2, 3, 5};

    swapAlternate(even, 8);
    printArray(even, 8);

    swapAlternate(odd, 5);
    printArray(odd, 5);
}*/

//.........................................

//Swap Alternate arrays with using inbuilt swap function

#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

int main(){
    int even[6] = {1, 5, 6, 9, 5, 47};
    int odd[5] = {5, 7, 2, 1, 2};

    swapAlternate(even, 6);
    printArray(even, 6); 

    swapAlternate(odd, 5);
    printArray(odd, 5);


}

