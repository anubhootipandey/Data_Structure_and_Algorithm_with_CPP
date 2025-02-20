#include <iostream>
#include <list>
using namespace std;

int main(){ 
    list<int> l;

    l.emplace_back(1);
    l.emplace_front(4);
    l.push_back(2);
    l.push_front(3);

    l.pop_back();
    l.pop_front();

    for(int val : l){
        cout << val << " ";
    } 
    cout << endl;

    // cout << l[2] << endl; ---> it will show, it is not dynamic

    return 0;
}