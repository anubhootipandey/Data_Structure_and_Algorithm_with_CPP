#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter a & b: "<<endl;
    cin >> a >> b;

    if(a<b){
        cout<< "Smaller num is a: "<< a;
    } else {
        cout<< "Smaller num is b: "<< b;
    }
    return 0;
}