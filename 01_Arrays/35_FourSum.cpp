#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<vector<int>> fourSum(vector<int>& arr, int tar){
    vector<vector<int>> ans;
    int n = arr.size();

    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++){
        if(i > 0 && arr[i] == arr[i-1]) continue;

        for(int j=i+1; j<n;){
            int p = j+1, q = n-1;

            while(p < q){
                long long sum = (long long)arr[i] + (long long)arr[j] + (long long)arr[p] + (long long)arr[q];

                if(sum < tar){
                    p++;
                } else if(sum > tar){
                    q--;
                } else{
                    ans.push_back({arr[i], arr[j], arr[p], arr[q]});
                    p++; q--;

                    while(p < q && arr[p] == arr[p-1]) p++;
                }

            }
            j++;
            while(j < n && arr[j] == arr[j-1]) j++;
        }

    }

    return ans;
}

int main(){
    vector<int> arr = {-2, -1, -1, 1, 1, 2, 2};
    int tar = 0;

    cout << fourSum(arr, tar);

    return 0;
}

