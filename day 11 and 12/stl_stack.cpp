#include<iostream>
using namespace std;
#include<stack>

int main(){
    stack<string> s;

    s.push("a");
    s.push("b");
    s.push("c");
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
}