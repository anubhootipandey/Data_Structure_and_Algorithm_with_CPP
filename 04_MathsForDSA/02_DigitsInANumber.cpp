#include <iostream>
#include <math.h>
using namespace std;

// print digits
void printDigits(int n){
    while(n != 0){
        int digit = n % 10;
        cout << digit << endl;

        n = n / 10;
    }
}

//count digits
void countDigits(int n){
    int count = 0;
    while(n != 0){
        int digit = n % 10;
        count++;

        n = n / 10;
    }

    cout << count << endl;
}

//sum of digits
void sumOfDigits(int n){
    int sum = 0;
    //0(log base 10 n) --> Time Complexity
    while(n != 0){
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }

    cout << sum << endl;
}

int main(){
    int n = 3568;

    // printDigits(n);
    // countDigits(n);
    // sumOfDigits(n);
    cout << (int)(log10(n) + 1) << endl; //count digit shortcut
    return 0;
}

