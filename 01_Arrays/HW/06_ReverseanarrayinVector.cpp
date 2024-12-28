#include <iostream>
#include <vector>
using namespace std;

void reverseArr(vector<int>& arr, int size){
    int start=0, end=size-1;
        while(start < end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
}

int main(){
    vector<int> arr = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    reverseArr(arr, size);

    for(int i: arr){
        cout<< i << " ";
    }

    cout<<endl;

    return 0;
}