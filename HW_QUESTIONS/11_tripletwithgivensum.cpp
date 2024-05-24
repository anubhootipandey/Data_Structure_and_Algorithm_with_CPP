#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K){
    vector<vector<int>> triplets;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == K){
                    triplets.push_back({arr[i], arr[j], arr[k]});
                }
            }
        }
    }
    return triplets;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int K = 6;

    vector<vector<int>> result = findTriplets(arr, n, K);

    cout << "Triplets with sum "<< K <<":";
    for (const auto& triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}