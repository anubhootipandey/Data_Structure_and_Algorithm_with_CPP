#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;

    s.insert(2);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(0);

    for(auto i : s){
        cout<<i<<endl;
    } cout<<endl;

    set<int>::iterator it = s.begin();
    s.erase(it);

    // s.erase(s.begin());
    for(auto i : s){
        cout<<i<<endl;
    }

    //count
    cout<<"Present or not? "<<s.count(6)<<endl;

    set<int>::iterator itr = s.find(6);

    for(auto it = itr; it!=s.end(); it++){
        cout<<it<<" ";
    }cout<<endl;
    // cout<<"Value present at itr-> "<<itr<<endl; 
}