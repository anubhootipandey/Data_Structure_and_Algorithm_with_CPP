#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//TC: 0(n^2) -- Brute force approach
// int subarraySum(vector<int>& arr, int k){
//     int n = arr.size();
//     int count = 0;

//     for(int i=0; i<n; i++){
//         int sum = 0;
//         for(int j=i; j<n; j++){
//             sum += arr[j];
//             if(sum == k) count++;
//         }
//     }

//     return count;
// }

//prefix sum
int subarraySum(vector<int>& arr, int k){
    int n = arr.size();
    int count = 0;
    vector<int> prefixSum(n, 0);

    prefixSum[0] = arr[0];
    for(int i=1; i<n; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

    unordered_map<int, int> m;
    for(int j=0; j<n; j++){
        if(prefixSum[j] == k) count++;

        int val = prefixSum[j] - k;
        if(m.find(val) != m.end()){
            count += m[val];
        }

        if(m.find(prefixSum[j]) != m.end()){
            m[prefixSum[j]] = 0;
        }
        m[prefixSum[j]]++;
    }

    return count;
}

int main(){
    vector<int> arr = {9, 4, 20, 3, 10, 5};

    cout << subarraySum(arr, 33);
    return 0;
}


// class Solution {
//     public:
//         int subarraySum(vector<int>& nums, int k) {
            // unordered_map<int, int> m;
            // int count=0, sum = 0;
            // int n = nums.size();
            // for(int i=0; i<n; i++){
            //     sum += nums[i];
            //     if(sum==k) count++;
            //     if(m.find(sum-k)!=m.end()){
            //         count = m[sum-k]+count;
            //     }
            //     if(m.find(sum)!=m.end()){
            //         m[sum]++;
            //     }else{
            //         m[sum] = 1;
            //     }
            // }
            // return count;
//         }
//     };