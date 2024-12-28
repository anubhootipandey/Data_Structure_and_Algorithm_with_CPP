#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& arr, int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {4, 2, 7, 8, 1, 2, 5};
    int target = 8;
    int size = 7;

    cout<< linearSearch(arr, size, target) <<endl;

    return 0;
}