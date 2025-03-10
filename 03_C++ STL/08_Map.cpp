#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> m;

    // multimap<string, int> m;
    m.emplace("camera", 25);
    m.emplace("camera", 25);
    m.emplace("camera", 25);
    // m.emplace("tv", 100);
    // m.emplace("mobile", 50);

    // m.erase("camera");
    // m.erase(m.find("camera")); // to only erase one iterator

    // map<string, int> m;
    // m["tv"] = 100; //insert, change
    // m["laptop"] = 100;
    // m["mobile"] = 50;
    // m["mobile"] = 80;

    // m.insert({"camera", 25});
    // m.emplace("camera", 25);

    // m.erase("tv");

    // if(m.find("camera") != m.end()){
    //     cout << "found\n";
    // } else{
    //     cout << "notfound\n";
    // }

    for(auto p: m){
        cout << p.first << " " << p.second << endl;
    }

    // cout << "count : " << m.count("laptop") << endl;
    // cout << "value : " << m["laptop"] << endl;

    return 0;
}