#include <iostream>
#include <vector>
#include <set>
using namespace std;

//---brute force approach
// int threeSum(vector<int>& arr){
//     int n = arr.size();
//     vector<vector<int>> ans;

//     set<vector<int>> s;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             for(int k=j+1; k<n; k++){
//                 if(arr[i] + arr[j] + arr[k] == 0){
//                     vector<int> triplet = {arr[i], arr[j], arr[j]};
//                     sort(triplet.begin(), triplet.end());

//                     if(s.find(triplet) != s.end()){
//                         s.insert(triplet);
//                         ans.push_back(triplet);
//                     }
//                 }
//             }
//         }
//     }

//     return ans;
// }


//hashing approach
// int threeSum(vector<int>& arr){
//     int n = arr.size();
//     set<vector<int>> uniqueTriplets;

//     for(int i=0; i<n; i++){
//         int tar = -arr[i];
//         set<int> s;

//         for(int j=i+1; j<n; j++){
//             int third = tar - arr[j];

//             if(s.find(third) != s.end()){
//                 vector<int> trip = {arr[i], arr[j], third};
//                 sort(trip.begin(), trip.end());
//                 uniqueTriplets.insert(trip);
//             }

//             s.insert(arr[j]);
//         }
//     }
//     vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
//     return ans;
// }

vector<vector<int>> threeSum(vector<int>& arr){
    int n = arr.size();
    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++){
        if(i > 0 && arr[i] == arr[i-1]) continue;

        int j = i+1, k = n-1;

        while(j < k){
            int sum = arr[i] + arr[j] + arr[k];
            if(sum < 0){
                j++;
            } else if(sum > 0){
                k--;
            } else{
                ans.push_back({arr[i], arr[j], arr[k]});
                j++; k--;

                while(j < k && arr[j] == arr[j-1]) j++;
            }
        }
    }

    return ans;
}

int main(){
    vector<int> arr = {-1, 0, 1, 2, -1, -4};

    cout << threeSum(arr);
    return 0;
}