#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "hello";

    reverse(str.begin(), str.end()); // it returns iterators
    cout << str << endl;

    // int n = str.length();
    // int st = 0, end = n-1;

    // while( st <= end){
    //     swap(str[st], str[end]);
    //     st++;
    //     end--;
    // }
    
    return 0;
}