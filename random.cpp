//setbits program

#include <iostream>
using namespace std;

int setBitsA(int a){
    int count = 0;
    while(a != 0){
        if(a & 1){
            count ++;
        }
        a = a >> 1;
    }
    return count;
}
int setBitsB(int b){
    int count = 0;
    while(b != 0){
        if(b & 1){
            count ++;
        }
        b = b >> 1;
    }
    return count;
}

int main(){
    int a, b;
    cout<<"Enter a & b: "<<endl;
    cin >> a >> b;

    int res1 = setBitsA(a);
    int res2 = setBitsB(b);

    cout<<"The setbits of A is "<<res1 <<endl;
    cout<<"The setbits of B is "<<res2 <<endl;

    int result =  res1 + res2;
    cout<<"The setbits of A and B are "<< result <<endl;

    return 0;
} 


//fibonacci program

// #include <iostream>
// using namespace std;

// int fib(int n){
//     int a = 0;
//     int b = 1;
//      for(int i=2; i<n; i++){
//         int next = a + b;
//         a = b;
//         b = next;
//      }
//      return b;
// }

// int main(){
//     int n;
//     cout<<"Enter n: "<<endl;
//     cin>> n;

//     cout<< "The "<<n<<"th term of the fibonacci series is " <<fib(n)<<endl;
// }