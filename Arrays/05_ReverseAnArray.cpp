//Reverse an array

#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[], int n){

    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}

int main(){
    int arr[8] = {1, 2, 3, 4, -5, 6, -7, 8};
    int brr[6] = {2, 4, 5, 3, 9, 8};

    reverse(arr, 8);
    reverse(brr, 6);

    //print the array
    printArr(arr, 8);
    printArr(brr, 6);

    return 0;
} 