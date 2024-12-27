#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> vec; //size = 0
    // cout<< vec[0]; //segmentation fault-->we are trying to access the place in memory which is not possible or don't have permission

    // vector<int> vec = {1, 2, 3};  //size=3
    // cout<< vec[0]; //1

    // vector<int> vec(5, 0); //size = 5
    // cout<< vec[0] << endl;
    // cout<< vec[1] << endl;
    // cout<< vec[2] << endl;
    // cout<< vec[3] << endl;
    // cout<< vec[4] << endl;

    // vector<char> vec = {'a', 'b', 'c', 'D', 'e'};
    // vector<int> vec;

    // //Vector Functions---->
    // //1. Size
    // cout<< "Size of the vector is: " << vec.size() << endl;

    // //2. push_back
    // vec.push_back(25);
    // vec.push_back(35);
    // vec.push_back(45);
    // vec.push_back(55);
    // cout<< "After push_back size = " << vec.size() << endl;

    // //3.pop_back
    // vec.pop_back();
    // // cout<< "After pop_back size = " << vec.size() << endl;

    // //4. front
    // cout<< vec.front() << endl;

    // // 5.back
    // cout<< vec.back() << endl;

    // //6. at
    // cout<< vec.at(2) << endl;

    // for(int val: vec){
    //     cout<< val << endl;
    // }

    // for(char val: vec){
    //     cout<< val << endl;
    // }



    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout<< "Size of the vector is: "<< vec.size() << endl;
    cout<< "Capacity of the vector is: "<< vec.capacity() << endl;
    return 0;
}