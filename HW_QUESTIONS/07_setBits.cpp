#include <iostream>
using namespace std;

int setBitsB(int b){
    int count = 0;
    while(b != 0){
        if(b & 1){
            count ++;
        }
        b = b >> 1;
    }
    return count;
}

int setBitsA(int a){
    int count = 0;
    while(a != 0){
        if(a & 1){
            count ++;
        }
        a = a >> 1;
    }
    return count;
}

int main(){
    int a, b;
    cout<<"Enter the value of a & b: "<<endl;
    cin>> a >> b;
    int res1 = setBitsA(a);
    int res2 = setBitsB(b);
    cout<<"Set bits of A is "<< res1 <<endl;
    cout<<"Set bits of B is "<< res2 <<endl;

    int result = res1 + res2;
    cout<< "Total setBits of A and B are "<< result <<endl;

    return 0;
}