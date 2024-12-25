#include <iostream>
using namespace std;

int main(){
    int n=4;

    for(int i=0; i<n; i++){ //---> no. of lines
       char ch = 'A';
       ch += i;
       for(int j=0; j<i; j++){ //---> no. of spaces
           cout<<" ";
       }
       for(int j=0; j<n-i; j++){ //---> print numbers
           cout<<ch;
       }
       cout<<endl;
    }

    return 0;
}