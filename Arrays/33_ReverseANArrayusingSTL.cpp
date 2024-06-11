#include <iostream>
#include <vector>
using namespace std;


void reverseArray(vector<int> &arr, int m){
    int s = m+1, e=arr.size()-1;

    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    } cout<<endl;
}

int main(){
    vector<int> v;
    v.push_back(11);
    v.push_back(11);
    v.push_back(11);
    v.push_back(11);
    v.push_back(11);

    vector<int> ans = reverse(v);
    cout<<"Printing reverse Array: "<<endl;
    print(ans);

    return 0;

}