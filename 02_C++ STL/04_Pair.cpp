#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main(){ 
    // pair<int, int> p = {1, 5};
    // pair<string, int> p = {"Anubhooti", 5};
    // pair<int, pair<char, int>> p = {1, {'a', 3}};
    vector<pair<int, int>> vec = {{1,2}, {2,3}, {3,4}};

    // vec.push_back({4,5});
    vec.emplace_back(4,5); // it creates in-place objects

    for( pair<int, int> p : vec){
        cout << p.first << " " << p.second << endl;
    }

    // cout << p.first << endl;
    // cout << p.second.second << endl;

    return 0;
}