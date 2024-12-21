#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter age: "<<endl;
    cin >> age;

    if(age >= 18){
        cout<< "Approved Driving License";
    } else{
        cout<< "Rejected Driving License";
    }
    return 0;
}