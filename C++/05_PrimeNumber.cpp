#include <iostream>
using namespace std;

int main(){
    int n, i=2;
    cout<<"Enter n: "<<endl;
    cin >> n;
    bool isPrime = true;

    while(i <= n-1){
        if(n%i == 0){
            cout<< "It is not a Prime number.";
            isPrime = false;
            break;
        } else {
            i += 1;
        }
    }
    if(isPrime){
        cout<< "It is a Prime number.";
    }
    return 0;
}