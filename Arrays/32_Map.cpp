#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string> m;

    m[1] = "Kuch Bhi"; 
    m[4] = "do";
    m[3] = "Likh";

    m.insert({5, "Bheem"});

    cout<<"Before erase-> "<<endl;
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding element-> "<<m.count(4)<<endl;

    m.erase(4);
    cout<<"After erase-> "<<endl;
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    auto it = m.find(5);
    for(auto i=it; it!= m.end(); i++){
        cout<<(*i).first<<endl;
    }
   
}