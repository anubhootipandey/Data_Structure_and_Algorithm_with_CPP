#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter character ch: "<<endl;
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        cout<< "Character is Lowercase.";
    } else{
        cout<< "Character is Uppercase.";
    }
    return 0;
}