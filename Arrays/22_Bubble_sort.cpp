#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=1; i<n; i++){
        //for round 1 to (n-i) th index
        for(int j=0; j< n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            };
        };
    };
};

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    };
    cout<< endl;
}

int main(){
    int arr[] = {29, 72, 98, 13, 87, 66, 52, 52, 36};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout<< "Bubble Sort : ";
    printArray(arr, n);

    return 0;
}

