#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("John");
    q.push("Kuchbhi");
    q.push("Baktah");

    cout<<"Size before pop->"<<q.size()<<endl;
    cout<<"Top element-> "<<q.front()<<endl;

    q.pop();
    cout<<"Top Element ->"<<q.front()<<endl;

    cout<<"Size after pop->"<<q.size()<<endl;

    cout<<"Empty or not? "<<q.empty()<<endl;
}