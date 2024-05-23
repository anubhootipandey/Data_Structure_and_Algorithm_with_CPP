//Unique element in array 

#include <iostream>
using namespace std;

int findUnique(int arr[], int size){
    int ans = 0;

    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[5] = {1, 2, 4, 2, 1};

    int res = findUnique(arr, 5);
    cout<<"Unique element is "<< res <<endl;

    return 0;
}