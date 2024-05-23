#include <iostream>
using namespace std;

int pow(int a, int b){
    int result = 1;
    for(int i=0; i<=b; i++){
        result *= a;
    }
    return result;
}

int main(){
    int a, b;
    cin>> a >> b;

    int ans = pow(a, b);
    cout<< ans << endl;

    return 0;
}