#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {4, 5, 10, -2, 13};
    int size = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    // for(int i=0; i<size; i++){
    //     if(arr[i] < smallest){
    //        smallest = arr[i];
    //     }
    //     if(arr[i] > largest){
    //        largest = arr[i];
    //     }
    // }


    //min, max
    for(int i=0; i<size; i++){
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }

    cout<< "Smallest: " << smallest <<endl;
    cout<< "Largest: " << largest <<endl;
    return 0;
}