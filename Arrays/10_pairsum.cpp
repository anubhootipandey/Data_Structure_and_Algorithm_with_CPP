#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector< vector<int> > ans;

    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            vector<int> temp;
            temp.push_back(min(arr[i], arr[j]));
            temp.push_back(max(arr[i], arr[j]));
            ans.push_back(temp);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int s = 5;

    vector<int> result = pairSum(arr, s);

    cout << "Pair sum: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}