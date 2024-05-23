#include<iostream>
using namespace std;

int main(){
    int a = 4; 
    int b = 6;
    cout<< (a&b) <<endl;//4
    cout<< (a|b) <<endl;//6
    cout<< ~a <<endl;//-5
    cout<< (a^b) <<endl;//2

    cout<< (17>>1) <<endl;//8
    cout<< (17>>2) <<endl;//4
    cout<< (19<<1) <<endl;//38
    cout<< (21<<2) <<endl;//84

    int i = 7;
    cout<< (++i) <<endl;//8
    cout<< (i++) <<endl;//8, i=9
    cout<< (i--) <<endl;//9, i=8
    cout<< (--i) <<endl;//7, i=7
}