//Painter's Partition Problem

#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){
    int painter = 1;
    int boardsPainted = 0;

    for(int i=0; i<n; i++){
        if(boardsPainted + arr[i] <= mid){
            boardsPainted += arr[i];
        } else{
            painter++;
            if(painter > k || arr[i] > mid){
                return false;
            }
            boardsPainted = arr[i];
        }
    }
    return true;
}

int findLargestMinDistance(int arr[], int n, int k){
    int start = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while(start <= end){
        if(isPossible(arr, n, k, mid)){
            ans = mid;
            end = mid - 1;
        } else{
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(){
    int arr[] = {5, 5, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    int result = findLargestMinDistance(arr, n, k);
    cout << "Minimum time: " << result << endl;

    return 0;
}