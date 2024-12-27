#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n=5;

    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            //st to n-1 --nested loop
            for(int i=st; i<=end; i++){
                cout<< arr[i];
            }
             cout<< " ";
        }
        cout<<endl;
    }
    
    return 0;
}

