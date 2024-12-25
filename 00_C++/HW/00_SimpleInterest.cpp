#include <iostream>
using namespace std;

int main(){
    int P, R, T;
    cout<<"Enter P, R & T: "<<endl;
    cin >> P >> R >> T;

    int SI = (P * R * T)/100;
    cout<< "Simple Interest is: " << SI << endl;

    return 0;
}