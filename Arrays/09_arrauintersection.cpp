//Find array intersection

#include <iostream>
#include <vector>
using namespace std;

// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2){
//     vector<int> ans;
//     for(int i=0; i<n; i++){
//         int element = arr1[i];

//         for(int j=0; j<n; j++){
//             if(element < arr2[j]){
//                 break;
//             }
//             if(element == arr2[j]){
//                 ans.push_back(element);
//                 arr2[j] = -2;
//                 break;
//             }
//         }
//     }
//     return ans;
// }

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2){
    vector<int> ans;
    int i=0, j=0;

    while(i<n && j<n){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
     
}

int main(){
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {3, 4, 5, 6, 7};
    int n = arr1.size();

    vector<int> result = findArrayIntersection(arr1, n, arr2);

    cout << "Intersection: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}