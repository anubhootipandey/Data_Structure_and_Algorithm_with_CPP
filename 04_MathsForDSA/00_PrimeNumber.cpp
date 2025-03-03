#include <iostream>
using namespace std;

string isPrime(int n){
    for(int i = 2; i*i <= n; i++){
        if(n % 2 == 0){
            return "Non-Prime Number";
        }
    }
    return "Prime Number";
}

int main(){
    int n = 3;

    cout << isPrime(n) << endl;
    return 0;
}