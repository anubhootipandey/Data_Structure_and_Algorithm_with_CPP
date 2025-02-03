#include <iostream>
using namespace std;

double myPow(double x, int n){
    //corner cases
    if(n == 0) return 1.0;
    if(x == 0) return 0.0;
    if(x == 1) return 1.0;
    if(x == -1 && n%2 == 0) return 1.0; 
    if(x == -1 && n%2 != 0) return -1.0; 

    long binForm = n;
    if(n < 0){
        x = 1/x;
        binForm = -binForm;
    }

    double ans = 1;

    while(binForm > 0){
        if(binForm % 2 == 1){
            ans *= x;
        }
        x *= x; //x^2
        binForm /= 2;
    }
    return ans;
}

int main(){
    cout << myPow(2.0, 10) << endl;   
    cout << myPow(2.0, -2) << endl;  
    cout << myPow(-1, 3) << endl;     
    cout << myPow(-1, 4) << endl;     
    cout << myPow(0, 5) << endl;  
    return 0;
}