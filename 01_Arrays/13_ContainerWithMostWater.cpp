#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height){
    int maxWater = 0;
    int l=0, r=height.size()-1;

    while(l < r){
        int w = r - l;
        int ht = min(height[l], height[r]);
        int currWater = w * ht;
        maxWater = max(maxWater, currWater);

        height[l] < height[r] ? l++ : r++;
    }

    return maxWater;
}

int main(){
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout<< "Maximum Area: " << maxArea(height) << endl;
    return 0;
}