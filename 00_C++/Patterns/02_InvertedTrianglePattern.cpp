#include <iostream>
using namespace std;

int main(){
    int n=4;

    for(int i=0; i<n; i++){ //---> no. of lines
       for(int j=0; j<i; j++){ //---> no. of spaces
           cout<<" ";
       }
       for(int j=0; j<n-i; j++){ //---> print numbers
           cout<<(i+1);
       }
       cout<<endl;
    }

    return 0;
}