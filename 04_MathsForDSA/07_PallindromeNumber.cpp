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

bool isPallindrome(int n){
    if(n < 0) return false;

    int revNum = reverseNum(n);
    return n == revNum;
}

int main(){
    int n = 35453;
    cout << isPallindrome(n);
    return 0;
}

