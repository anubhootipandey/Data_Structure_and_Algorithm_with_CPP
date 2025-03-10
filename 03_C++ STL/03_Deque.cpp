#include <iostream>
#include <deque>
using namespace std;

int main(){ 
    deque<int> d;  //---> double ended queue

    d.emplace_back(1);
    d.emplace_front(4);
    d.push_back(2);
    d.push_front(3);
    d.pop_back();
    d.pop_front();

    for(int val : d){
        cout << val << " ";
    } 
    cout << endl;

    cout << d[2] << endl;

    return 0;
}