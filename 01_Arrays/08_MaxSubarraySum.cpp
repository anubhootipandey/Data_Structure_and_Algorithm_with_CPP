#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n=5, currSum = 0, maxSum = INT_MIN;
 
    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }

    cout<< "Maximum subarray sum is: " << maxSum << endl;
    
    return 0;
}

