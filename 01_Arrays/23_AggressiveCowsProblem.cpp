#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minAllowedDistance){
    int cows = 1, lastStallPosition = arr[0];
    
    for(int i=0; i<N; i++){
        if(arr[i] - lastStallPosition >= minAllowedDistance){
            cows ++;
            lastStallPosition = arr[i];
        } 
        if(cows == C){
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> &arr, int N, int C){  //0(log(range) * N)
    sort(arr.begin(), arr.end());
    int st = 1, end = arr[N - 1] - arr[0], ans = -1; 

    while(st <= end){ //0(log(range) * N)
        int mid = st + (end - st)/2;

        if(isPossible(arr, N, C, mid)){
            ans = mid;
            st = mid + 1;
        } else{
            end = mid - 1;
        }
    }

    return ans;
}

int main(){
    int N = 5, C = 3; 
    vector<int> arr = {1, 2, 8, 4, 9};

    cout << getDistance(arr, N, C) << endl;
    return 0;
}