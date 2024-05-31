#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i< n-1; i++){
        int minIndex = i;

        for(int j= i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}

int main(){
    int arr[] = {29, 72, 98, 13, 87, 66, 52, 52, 36};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    cout<< "Sorted Array : ";
    printArray(arr, n);

    return 0;
}