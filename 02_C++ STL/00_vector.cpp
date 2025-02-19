#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> vec;
    vector<int> vec = {1, 2, 3, 4, 5};
    // vector<int> vec(3, 10);  // (size, value)
    // vector<int> vec2(vec);

    // vec.erase(vec.begin() + 1, vec.begin() + 3);
    // vec.insert(vec.begin() + 2, 200);
    // vec.clear();
    // cout << vec.empty();
    cout<< *(vec.begin()) << endl;
    cout<< *(vec.end()) << endl;

    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.emplace_back(6);

    // vec.pop_back();

    // for(int val : vec){
    //     cout << val << " ";
    // }
    // cout << endl;

    // cout << "Value at index 2 : " << vec[2] << " or " << vec.at(2) << endl;

    // cout << "Front: " << vec.front() << endl;
    // cout << "Back: " << vec.back() << endl;

    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;

    return 0;
}