#include <iostream>
using namespace std;

int fib(int n){
    int a = 0;
    int b = 1;

    for(int i=2; i<n; i++){
        int next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main(){
    int n;
    cout<<"Enter n: "<< endl;
    cin>> n;

    cout<<"The " <<n<<"th term of the series is "<<fib(n)<<endl;

    return 0;
}