#include <iostream>
using namespace std;

int main(){
    int amount = 0;
    int hundred = 0, fifty = 0, twenty = 0, ten = 0, one = 0;
    int remainder = 1;
    int ch;

    cout<< "Enter the amount: " <<endl;
    cin>> amount;

    cout<< "Enter your choice (from 1 to 5): " <<endl;
    cin>> ch;

    switch(ch){
        case 1: 
            hundred = amount / 100;
            remainder = amount % 100;
            cout<< "The number of hundred notes is: " << hundred <<endl;
            break;
        case 2: 
            fifty = remainder / 50;
            remainder = remainder % 50;
            cout<< "The number of fifty notes is: " << fifty <<endl;
            break;
        case 3: 
            twenty = remainder / 20;
            remainder %= 20;
            cout<< "The number of twenty notes is: " << twenty <<endl;
            break;
        case 4:
            ten = remainder / 10;
            remainder %= 10;
            cout<< "The number of ten notes is: " << ten <<endl;
            break;
        case 5:
            one = remainder / 1;
            remainder %= 1;
            cout<< "The number of one notes is: " << one <<endl;
        default:
            cout<< "Invalid Choice! Enter the choice from 1 to 5.";
    }

    return 0;
}