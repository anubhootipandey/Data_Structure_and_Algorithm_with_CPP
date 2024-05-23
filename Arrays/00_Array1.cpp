//How to initialize an entire with any value


//using fill
#include <iostream>
using namespace std;

// int main(){
//     // const int SIZE = 10;
//     // int arr[SIZE];
//     // int value = 4;

//     // fill(arr, arr + SIZE, value);
//     // for(int i=0; i<SIZE; ++i){
//     //     cout<< arr[i] << endl;
//     // }

//     //OR

//     int arr[100];

//     fill_n(arr, 100, 1);

//     for(int i=0; i<=6; i++){
//         cout<< arr[i] << endl;
//     }
//     return 0;
// }



//initialization during declaration

int main(){
    const int SIZE = 10;
    int arr[SIZE] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    // int arr[SIZE] = {1};
    
    for(int i=0; i<SIZE; ++i){
        cout<< arr[i] << endl;
    }

    return 0;
}


