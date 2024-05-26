
#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        };

        mid = start + (end - start) / 2;
    }
    return ans;
    
}

int lastOcc(int arr[], int n, int key){
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        };

        mid = start + (end - start) / 2;
    }
    return ans;
    
}

int main(){
    int odd[5] = {1, 2, 3, 3, 5};

    cout<<"First occurrence of 3 is at Index "<< firstOcc(odd, 5, 3) <<endl;
    cout<<"Last occurrence of 3 is is at Index "<< lastOcc(odd, 5, 3) <<endl;

    return 0;
}