#include <iostream>
using namespace std;

void printArr(){

}

int main(){

    //declare
    int number[15];

    //accessing an array
    cout<< "Value at 15 index " << number[14] <<endl;

    //accessing an index value of an array which is not in arr size
    // cout<< "Value at 25 index "<< number[25] <<endl;//random garbage value

    //initialize an array
    int second[3] = {5, 7, 11};
    //accessing an element
    cout<< "Value at 2 index " << second[2] <<endl;


    // //initialize an array
    // int third[15] = {2, 7};
    
    // int n = 15;
    // cout<<"printing an array"<<endl;
    // //Print the array
    // for(int i=0; i<n; i++){
    //     cout<<third[i]<<endl;
    // }


    //intializing all locations with 0
    int fourth[10] = {0};

    int n = 10;
    cout<<"Printing the array"<<endl;
    //print the array
    for(int i=0; i<n; i++){
        cout<<fourth[i]<< " ";
    }

    return 0;
}