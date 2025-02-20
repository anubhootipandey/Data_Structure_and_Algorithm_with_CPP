#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};

    // vector<int>::iterator it;
    // vector<int>::reverse_iterator it;

    //forward loop ---> vec.begin(), vec.end()
    // for(it = vec.begin(); it != vec.end(); it++){
    //     cout << *(it) << endl;
    // }
    // cout << endl;

    //backward loop --> rbegin(), rend()
    // for(it = vec.rbegin(); it != vec.rend(); it++){
    //     cout << *(it) << endl;
    // }

    // or we can also write like this

    // for(vector<int>::reverse_iterator it = vec.rbegin(); it != vec.rend(); it++){
    //     cout << *(it) << endl;
    // }

    // and to remove the need of write this much of keyword, we use "auto"

    for(auto it = vec.rbegin(); it != vec.rend(); it++){
        cout << *(it) << endl;
    }

    cout << endl;

    return 0;
}


