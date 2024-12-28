#include <iostream>
using namespace std;

int main(){
    int nums[] = {1, 1, 1, 2, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int sum = 0, product = 1;

    for(int i=0; i<n; i++){
        sum += nums[i];
        product *= nums[i];
    }

    cout<< "The sum is: " << sum << endl;
    cout<< "The product is: " << product << endl;

    return 0;
}