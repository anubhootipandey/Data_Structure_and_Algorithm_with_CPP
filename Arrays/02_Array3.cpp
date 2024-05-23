//Question: Find the MAX and MIN of an array

#include <iostream>
#include <climits>
using namespace std;

//min value in array
int findMin(int num[], int n){
    int min1 = INT_MAX;

    for(int i=0; i<n; i++){
        // if(num[i] < min){
        //     min = num[i];
        // }

        //using built in function
        min1 = min(min1, num[i]);
    }
    return min1;
}

//max value in array
int findMax(int num[], int n){
    int max1 = INT_MIN;

    for(int i=0; i<n; i++){
        // if(num[i] > max){
        //     max = num[i];
        // }

         //using built in function
        max1 = max(max1, num[i]);
    }
    return max1;
}

int main(){
    int size;
    cout<<"Enter size: "<<endl;
    cin>>size;

    int num[100];

    //taking input in array
    for(int i=0; i<size; i++){
        cin>> num[i];
    }

    cout<< "Max element in array is "<< findMax(num, size)<<endl;
    cout<< "Min element in array is "<< findMin(num, size)<<endl;

    return 0;
}