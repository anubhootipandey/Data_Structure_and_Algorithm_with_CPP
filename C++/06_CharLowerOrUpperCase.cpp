#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter character ch: "<<endl;
    cin >> ch;

    // if(ch >= 'a' && ch <= 'z'){
    //     cout<< "Character is Lowercase.";
    // } else{
    //     cout<< "Character is Uppercase.";
    // }

    //Using ASCII Values
    if(ch >= 65 && ch <= 90){
        cout<< "Character is Uppercase.";
    } else{
        cout<< "Character is Lowercase.";
    }
    return 0;
}