#include <iostream>
using namespace std;

int main(){
    int N, count = 1, sum = 0;
    cout<<"Enter N: "<<endl;
    cin >> N;

    while(count <= N){
        sum += count;
        count += 1;
    }
    cout<< "The sum of numbers from 1 to N is: "<<sum;
    return 0;
}