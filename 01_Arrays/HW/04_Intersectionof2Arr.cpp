#include <iostream>
#include <vector>
using namespace std;

vector<int> findIntersection(vector<int>& arr1, vector<int>& arr2){
    vector<int> result;

    for(int i=0; i<arr1.size(); i++){
        for(int j=0; j<arr2.size(); j++){
            if(arr1[i] == arr2[j]){
                result.push_back(arr1[i]);
            }
        }
    }
    return result;
}

int main(){
    vector<int> arr1 = {1, 2, 4};
    vector<int> arr2 = {1, 3, 5, 4};

    vector<int> intersection = findIntersection(arr1, arr2);

    cout<<"Intersection: ";
    for(int num: intersection){
        cout<< num << " ";
    }
    cout<<endl;

    return 0;
}