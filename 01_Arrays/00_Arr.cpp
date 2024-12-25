#include <iostream>
using namespace std;

int main(){
    // int arr[3] = {2, 5, 8};
    int size = 5;
    int marks[5];

    // cout<<sizeof(arr) / sizeof(int); //total array size

    // input the array data
    for(int i=0; i<size; i++){
        cin>> marks[i];
    }

    //loop: 0 to size-1
    for(int i=0; i<size; i++){
        cout<< marks[i] << endl;
    }
    return 0;
}