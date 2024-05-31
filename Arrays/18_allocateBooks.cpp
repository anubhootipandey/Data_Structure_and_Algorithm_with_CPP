//Allocate books to students,  no-of books, m = 4 and no. of students, n = 2

#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i=0; i<n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        } else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m){
    if( m > n)  return -1;

    int start = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while(start <= end){
        if(isPossible(arr, n, m, mid)){
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
     int arr[] = {12, 34, 67, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;

    int result = allocateBooks(arr, n, m);
    if(result != -1) {
        cout << "Minimum pages: " << result << endl;
    } else {
        cout << "Not possible to allocate books" << endl;
    }

    return 0;
}