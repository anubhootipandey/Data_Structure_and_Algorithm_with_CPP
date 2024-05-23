#include <iostream>
using namespace std;

int AP(int n){
    int ap = 3 * n + 7;
    return ap;
}

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>> n;

    int res = AP(n);
    cout<< "The Result is "<< res <<endl;
    return 0;
}