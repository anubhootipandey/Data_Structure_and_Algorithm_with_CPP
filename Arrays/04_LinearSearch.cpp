//Linear search

#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){

    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    //search for the element whether the element is present in it or not
    
    cout<<"Enter the element you want to search for "<<endl;
    int key;
    cin>>key;

    bool found = linearSearch(arr, 10, key);

    if(found){
        cout<<"Key is present."<<endl;
    } else{
        cout<<"Key not found!"<<endl;
    }


    return 0;
}