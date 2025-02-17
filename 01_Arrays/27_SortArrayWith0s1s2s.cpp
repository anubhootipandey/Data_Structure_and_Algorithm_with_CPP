#include <iostream>
#include <vector>
using namespace std;

void sortArrayWith0s1s2s(vector<int> &nums){
    int n = nums.size();
    int mid = 0, high = n-1, low = 0;

    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            mid++, low++;
        } else if(nums[mid] == 1){
            mid++;
        } else{
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}

void printArray(vector<int> &nums){
    int n = nums.size();
    for(int i=0; i<n; i++){
        cout<< nums[i] << " ";
    }
    cout<< endl;
}

int main(){
    vector<int> nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};

    sortArrayWith0s1s2s(nums);
    printArray(nums);

    return 0;
}


















//---------------------------------------------------------------------------------------------------------------

// void insertionSort(vector<int> &nums){
//     int n = nums.size();
//     int count0 = 0, count1 = 0, count2 = 0;

//     //0(n)
//     for(int i=0; i<n; i++){
//         if(nums[i] == 0) count0++;
//         else if(nums[i] == 1) count1++;
//         else count2++;
//     }

//     int idx = 0;
//     //0(n)
//     for(int i=0; i<count0; i++){
//         nums[idx++] = 0;
//     }
//     for(int i=0; i<count1; i++){
//         nums[idx++] = 1;
//     }
//     for(int i=0; i<count2; i++){
//         nums[idx++] = 2;
//     }
// }