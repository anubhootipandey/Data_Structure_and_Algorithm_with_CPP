#include <iostream>
using namespace std;

int main(){
    int n=4;

    //Reverse Triangle Pattern
    for(int i=0; i<n; i++){
        char ch = 'A' + i;
        for(int j=i+1; j>0; j--){
            cout<<ch--<<" ";
        }
        cout<<endl;
    }

    //Floyd's Triangle
    // int num = 1;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j>0; j--){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    return 0;
}