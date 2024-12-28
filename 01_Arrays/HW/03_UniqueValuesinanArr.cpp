#include <iostream>
using namespace std;

void uniqueValues(int nums[], int n){
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
        if(count == 1){
            cout<< nums[i] << " ";
        }
    }
    cout<<endl;
}

int main(){
    int nums[] = {1, 1, 1, 2, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    uniqueValues(nums, n);

    return 0;
}