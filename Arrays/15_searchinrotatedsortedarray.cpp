#include <iostream>
using namespace std;

int getPivot(int arr[], int n){
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        } else{
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int binarySearch(int arr[], int start, int end, int key){
    int s = start;
    int e = end;

    int mid = s + (e - s) / 2;

    while(s <= e){
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            s = mid + 1;
        } else{
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return -1;
}

int searchInRotatedSortedArray(int arr[], int n, int k){
    int pivot = getPivot(arr, n);

    if(k >= arr[pivot] && k <= arr[n - 1]){
        return binarySearch(arr, pivot, n - 1, k);
    } else{
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main(){
    int arr[5] = { 8, 10, 17, 1, 3};

    cout<< "Index of k "<< searchInRotatedSortedArray(arr, 5, 17) <<endl;

    return 0;
}