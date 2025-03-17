#include <iostream>
#include <climits>
using namespace std;

int reverseNum(int n){
    int revNum = 0;

    while(n != 0){
        int digit = n % 10;

        if(revNum > INT_MAX/10 || revNum < INT_MIN) return 0;
        
        revNum = (revNum * 10) + digit;
        n = n / 10;
    }

    return revNum;
}

int main(){
    int n = 4537;
    cout << reverseNum(n);
    return 0;
}