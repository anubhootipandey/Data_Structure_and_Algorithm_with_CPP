#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin >> n;

    if(n%2 == 0){
        cout<< "Number is even";
    } else {
        cout<< "Number is odd";
    }
    return 0;
}