#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

//tc:0(n) sc:0(1)
int findDuplicates(vector<int>& arr){

    //slow-faster pointer approach
    int slow = arr[0], fast = arr[0];

    do{
        slow = arr[slow]; //+1
        fast = arr[arr[fast]]; //+2
    } while(slow != fast);

    slow = arr[0];
    while(slow != fast){
        slow = arr[slow]; //+1
        fast = arr[fast]; //+1
    }

    return slow; // you can also write fast as both have equal value

    // unordered_set<int> s;
    // for(int val : arr){
    //     if(s.find(val) != s.end()){
    //         return val;
    //     }

    //     s.insert(val);
    // }
     
    return -1;
}

int main(){
    vector<int> arr = {3, 1, 3, 4, 2};

    cout << findDuplicates(arr);
    return 0;
}