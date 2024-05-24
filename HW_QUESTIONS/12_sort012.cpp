//Sort 0 1 2
//Dutch National Flag algorithm.

#include <iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void sortZeroOneTwo(int arr[], int n){
    int left = 0, med = 0, right = n-1;

    while(med <= right){
        if(arr[med] == 0){
            swap(arr[left], arr[med]);
            left++;
            med++;
        } else if(arr[med] == 1){
            med++;
        } else{
            swap(arr[med], arr[right]);
            right--;
        }
    }

}

int main(){
    int arr[8] = {1, 1, 0, 2, 0, 2, 0, 1};

    sortZeroOneTwo(arr, 8);
    printArr(arr, 8);
    
    return 0;
}