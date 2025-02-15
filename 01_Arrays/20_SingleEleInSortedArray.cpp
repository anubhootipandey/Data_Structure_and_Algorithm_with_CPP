#include <iostream>
#include <vector>
using namespace std;

int SingleElementInSortedArray(vector<int> &arr){
    int n = arr.size();
    int st = 0, end = n-1;

    //corner case
    if(n==1) return arr[0];

    while(st <= end){
        int mid = st + (end - st)/2;

        //corner or edge cases
        if(mid == 0 && arr[0] != arr[1]) return arr[mid];
        if(mid == n-1 && arr[n-1] != arr[n-2]) return arr[mid];

        if(arr[mid - 1] != arr[mid] != arr[mid + 1]) return arr[mid];

        if(mid%2 == 0){ //even
            if(arr[mid - 1] = arr[mid]){ //left
                end = mid - 1;
            } else{ //right
                st = mid + 1;
            }
        } else{ //odd
            if(arr[mid - 1] == arr[mid]){ //right
                st = mid + 1;
            } else{ //left
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> arr1 = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout<< SingleElementInSortedArray(arr1) << endl; 

    vector<int> arr2 = {3, 3, 7, 7, 10, 11, 11};
    cout<< SingleElementInSortedArray(arr2) << endl; 
    return 0;
}