#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    // cout << s.size() << endl;
    cout << *(s.lower_bound(4)) << endl;
    cout << *(s.upper_bound(4)) << endl;

    // for(auto val : s){
    //     cout << val << endl;
    // }

    return 0;
}