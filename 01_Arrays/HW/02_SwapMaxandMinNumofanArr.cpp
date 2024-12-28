#include <iostream>
#include <vector>
using namespace std;

void swapMaxAndMin(vector<int>& nums){
    int n = nums.size();
    int max=0, min=0;

    for(int i=0; i<n; i++){
        if(nums[i]>nums[max]){
            max = i;
        }
        if(nums[i]<nums[min]){
            min = i;
        }
    }

    //swap max and min
    swap(nums[max], nums[min]);

    cout<< "After swapping, the array is: ";
    for(int val: nums){
        cout<< val << " ";
    }
    cout<< endl;
}

int main(){
    vector<int> nums = {1, 2, 5, 8, 4};

    swapMaxAndMin(nums);

    return 0;
}