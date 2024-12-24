#include <iostream>
using namespace std;

int main(){
    int n=4;

    //Top Pattern
    for(int i=0; i<n; i++){
        //Top-Left Pattern
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }

        //Top-Right Pattern
        //spaces 
        for(int j=0; j<2*(n-i-1); j++){
            cout<<" ";
        }
        for(int j=1; j<=i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //Bottom Pattern
    for(int i=0; i<n; i++){

        //Bottom-Left Pattern
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }

        //spaces
        for(int j=0; j<2*i; j++){
            cout<< " ";
        }

        //Bottom-Right Pattern
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }


}