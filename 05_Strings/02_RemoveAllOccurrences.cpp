#include <iostream>
#include <string>
using namespace std;

string removeAllOccurences(string s, string part){
    while(s.length() && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }

    return s;
}

int main(){
    string s = "daabcbaabcbc";
    string part = "abc";

    cout << removeAllOccurences(s, part) << endl;
    return 0;
}