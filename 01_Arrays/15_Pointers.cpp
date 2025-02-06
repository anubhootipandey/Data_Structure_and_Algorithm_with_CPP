#include <iostream>
using namespace std;

//pass by references using pointer
// void changeA(int* ptr) {
//     *ptr = 20;
// }

//pass by references using alias
// void changeA(int &b) {
//     b = 20;
// }

//-----------------------------------------------------------------------------------------------------

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    cout<< *arr << endl; // pointer = 1 ---> always points to arr[0]

    //-----------------------------------------------------------------------------------------------------
    // int a = 10;
    // changeA(a);
    // cout<< "Inside main function : " << a << endl;  //20

    //-----------------------------------------------------------------------------------------------------

    // int** ptr = NULL;
    // cout<< ptr << endl;

    //-----------------------------------------------------------------------------------------------------

    // int a = 10;
    // int* ptr = &a;
    // int** ptr2 = &ptr;

    // cout<< *(ptr) << endl; //give value of a, which is 10
    // cout<< *(&a) << endl; //give value of a, which is 10
    // cout<< **(ptr2) << endl; //give value of a, which is 10

    //-----------------------------------------------------------------------------------------------------

    // cout<< ptr << endl;
    // cout<< &a << endl;
    // cout<< ptr2 <<endl;
    // cout<< &ptr2 <<endl;
    return 0;
}