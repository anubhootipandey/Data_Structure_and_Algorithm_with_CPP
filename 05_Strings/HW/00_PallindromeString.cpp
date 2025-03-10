// find if a string is pallindrome or not.
#include <iostream>
#include <string>
using namespace std;

bool isAlphanumeric(char ch){
    if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }

    return false;
}

bool isPallindrome(string str){
    int st = 0, end = str.length()-1;
    while(st < end){
        if(!isAlphanumeric(str[st])){
            st++;
            continue;
        }
        if(!isAlphanumeric(str[end])){
            end--;
            continue;
        }
        if(tolower(str[st]) != tolower(str[end])){
            return false;
        }

        st++;
        end--;
    }
    return true;
}

int main(){
    string str = "Ac3?e3c&a";
    cout << isPallindrome(str) << endl;
    return 0;
}


