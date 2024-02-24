#include <iostream>
using namespace std;

//Function that search Key
bool search(int arr[], int size, int key){
    for(int i=0; i<10; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10] = {1, 5, -9, -4, 3, -6 , 7, -4, 3, 25};

    cout<<"Enter a Key"<<endl;

    int key;
    cin>>key;
    
    //function calling
    bool found = search(arr, 10, key);

    if(found){
        cout<<"Key is Present";
    }
    else{
        cout<<"Key is Absent";
    }
    return 0;
}