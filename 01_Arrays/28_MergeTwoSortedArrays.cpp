#include <iostream>
#include <vector>
using namespace std;

void mergeTwoSortedArr(vector<int>& nums1, int m, vector<int>& nums2, int n){
    int idx = m+n-1, i = m-1, j = n-1;

    while(i >= 0 && j >= 0){
        if(nums1[i] >= nums2[j]){
            nums1[idx--] = nums1[i--];
        } else{
            nums1[idx--] = nums2[j--];
        }
    }
    
    while(j >= 0){
        nums1[idx--] = nums2[j--];
    }
}

void printArray(vector<int> &nums, int n){
    for(int i=0; i<n; i++){
        cout<< nums[i] << " ";
    }
    cout<< endl;
}

int main(){
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 5;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    mergeTwoSortedArr(nums1, m, nums2, m);
    printArray(nums1, m);

    return 0;
}
