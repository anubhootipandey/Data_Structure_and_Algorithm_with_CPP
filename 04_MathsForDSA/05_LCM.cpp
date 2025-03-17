#include <iostream>
using namespace std;

int gcdRec(int a, int b){
    if(b == 0) return a;
     return gcdRec(b, a % b);
}

int lcm(int a, int b){
    int gcd = gcdRec(a, b);
    return (a * b) / gcd;
}

int main(){
    cout << lcm(20, 28);
    return 0;
}