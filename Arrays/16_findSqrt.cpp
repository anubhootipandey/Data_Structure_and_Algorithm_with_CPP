#include <iostream>
using namespace std;

long long int binarySearch(int n){
    int start = 0;
    int end = n;
    int ans = 0;
    long long int mid = start + (end - start) / 2;

    while(start <= end){
        long long int square = mid * mid;

        if(square > n){
            end = mid - 1;
        } else if(square < n){
            ans = mid;
            start = mid + 1;
        } else{
            return mid;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int mySqrt(int x){
    return binarySearch(x);
}

int main(){
    int x = 1000000;

    cout<< "Sqrt is " << mySqrt(x) << endl;
    return 0;
}