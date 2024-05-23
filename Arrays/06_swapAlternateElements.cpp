#include <iostream>
using namespace std;

void printArr(int arr[], int n){

    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}

void swapAlternate(int arr[], int size){

    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
    int even[8] = {5, 2, 3, 4, 5, 6, 8, 9};
    int odd[5] = {2, 3, 4, 7, 9};

    swapAlternate(even, 8);
    swapAlternate(odd, 5);

    printArr(even, 8);
    printArr(odd, 5);

    return 0;
}