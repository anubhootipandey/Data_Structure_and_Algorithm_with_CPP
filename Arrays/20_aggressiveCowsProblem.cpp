//Aggressive Cow's Problem

#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){
    int cowCount = 1;
    int lastPosition = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] - lastPosition >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastPosition = arr[i];
        }
    }
    return false;
}

int aggressiveCows(int arr[], int n, int k){
    sort(arr, arr + n);
    int start = 0;
    int maxi = -1;

    for(int i=0; i<n; i++){
        maxi = max(maxi, arr[i]);
    }

    int end = maxi;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while(start <= end){
        if(isPossible(arr, n, k, mid)){
            ans = mid;
            start = mid + 1;
        } else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(){
    int arr[] = {4, 2, 1, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    int result = aggressiveCows(arr, n, k);
    cout << " Maximum minimum distance: " << result << endl;

    return 0;
}