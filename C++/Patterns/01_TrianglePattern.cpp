#include <iostream>
using namespace std;

int main(){
    int n=4;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<'*'<<" ";
        }
        cout<<endl;
    }

    // char ch = 'A';
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout<<ch<<" ";
    //     }
    //     ch++;
    //     cout<<endl;
    // }

    //Reverse Triangle Pattern
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j>0; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

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