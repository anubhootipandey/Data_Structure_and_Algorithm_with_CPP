#include <iostream>
using namespace std;

int sumOfNNumbers(int n){
    if(n == 1) return 1;

    return n + sumOfNNumbers(n-1);
}

int main(){
    cout << sumOfNNumbers(4);
    return 0;
}