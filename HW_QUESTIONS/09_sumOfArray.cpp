//Print sum of all elemnts in an array

#include <iostream>
using namespace std;

int sumArr(int arr[], int n){
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    return sum;
}

int main(){

    int arr[] = {2, 7, 1, -4, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    int res = sumArr(arr, n);

    cout<< "Sum of all elements in an array is "<<res<<endl;

    return 0;
}