#include <iostream>
using namespace std;

int majorityElement(int nums[], int n){
    int count = 0, ans = 0;
    for(int i=0; i<n; i++){
        if(count == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            count++;
        } else{
            count--;
        }
    }
    return ans;
}

int main(){
    int nums[] = {1, 2, 2, 1, 1, 2, 2};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout<< "Majority Element is: " << majorityElement(nums, n) << endl;
    return 0;
}