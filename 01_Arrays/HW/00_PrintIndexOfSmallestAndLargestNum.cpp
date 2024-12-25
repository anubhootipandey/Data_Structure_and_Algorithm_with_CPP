#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {4, 5, -10, -2, 13};
    int index1, index2, size = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    //min, max
    for(int i=0; i<size; i++){
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);

        if(smallest == arr[i]){
            index1 = i;
        }
        if(largest == arr[i]){
            index2 = i;
        }
    }

    cout<< "Index of Smallest Number is: " << index1 <<endl;
    cout<< "Index of Largest Number is: " << index2 <<endl;
    return 0;
}