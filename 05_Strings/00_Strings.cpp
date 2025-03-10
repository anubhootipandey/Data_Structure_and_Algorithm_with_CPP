#include <iostream>
#include <string>
using namespace std;

//strings are dynamic because they can resize at runtime
int main(){
    // string str = "anubhooti pandey"; 
    // cout << str << endl;
    // str = "hello";
    // cout << str << endl;

    // string str1 = "hello";
    // string str2 = "hello";
    // string str = str1 + " " + str2;
    // cout << str << endl;
    // cout << (str1 == str2) << endl;
    // cout << (str1 < str2) << endl;
    // cout<< str1.length() << endl;

    // string str;
    // cin >> str;
    // getline(cin, str);
    // cout << "Output : " << str << endl;

    string str = "anubhooti pandey";
    // for(int i=0; i<str.length(); i++){
    //     cout << str[i] << " ";
    // }
    for(char ch : str){
        cout << ch << " ";
    }
    return 0;
}