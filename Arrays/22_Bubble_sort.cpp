#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=1; i<n; i++){
        //for round 1 to n-1
        for(int j=0; j< n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1])
            }
        }
    }
}

int main(){
    int arr[] = {29, 72, 98, 13, 87, 66, 52, 52, 36};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<< "Bubble Sort : "<<bubbleSort(arr, n)<<endl;

    return 0;
}