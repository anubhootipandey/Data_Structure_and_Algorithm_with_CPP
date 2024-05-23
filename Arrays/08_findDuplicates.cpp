//Find duplicates in an array

#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size){
    int ans = 0;

    //Xor all the elements in the array
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }

    //XOR [1, n-1]
    for(int i=1; i<size; i++){
        ans = ans^i;
    }
    return ans;
}

int main(){
    int arr[] = {1, 4, 3, 4, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int res = findDuplicate(arr, size);
    cout<< "The duplicate element in the array is "<< res <<endl;
    return 0;
}