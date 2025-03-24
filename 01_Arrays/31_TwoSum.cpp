#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int twoSum(vector<int>& arr, int target){
    int n = arr.size();
    unordered_map<int, int> m;
    vector<int> ans;

    for(int i=0; i<n; i++){
        int first = arr[i];
        int sec = target - first;

        if(m.find(sec) != m.end()){
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }

        m[first] = i;
    }

    return ans;
}

int main(){
    vector<int> arr = {5, 2, 11, 7, 15};
    int target = 9;

    cout << twoSum(arr, target);
    return 0;
}