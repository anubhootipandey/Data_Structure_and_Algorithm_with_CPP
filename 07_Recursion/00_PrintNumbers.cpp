#include <iostream>
using namespace std;

void printNumbers(int n){

    if(n == 1){
        cout << "1\n";
        return;
    }
    cout << n << " ";
    printNumbers(n-1);
}

int main(){
    printNumbers(30);
    return 0;
}