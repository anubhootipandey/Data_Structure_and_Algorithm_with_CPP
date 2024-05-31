#include <iostream>
using namespace std;

long long int sqrtInteger(int n){
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

double morePrecision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;

    for(int i = 0; i<precision; i++){
        factor = factor / 10;
        for(double j = 0; j*j<n; j= j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;

    cout<< "Enter n: "<< endl;
    cin>>n;

    int tempSol = sqrtInteger(n);
    cout<< "Answer is "<< morePrecision(n, 3, tempSol) << endl;

    return 0;
}