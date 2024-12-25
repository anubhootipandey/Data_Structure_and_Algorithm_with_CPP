#include <iostream>
using namespace std;

int main(){
    int n=3;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<j<< " ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0; i<n; i++){
    //     char ch = 'A';
    //     for(int j=0; j<n; j++){
    //         cout<< ch << " ";
    //         ch += 1; //65 + 1 = 66 -> B
    //     }
    //     cout<<endl;
    // }

    int num = 1;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<< num << " ";
            num++;
        }
        cout<<endl;
    }

    return 0;
}