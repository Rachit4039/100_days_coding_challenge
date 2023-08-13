#include<iostream>
using namespace std;
#include<map>

int main(){
    map<int,string> m;

    m[1]="a";
    m[1]="b";
    m[1]="c";

    m.insert({5,"e"});

    cout<<"before erase "<<endl;
    for(auto i :m){
        cout<<i.first << " " <<i.second<<endl;
    }

    cout<<"finding -13" <<" " << m.count(-13)<<endl;

    m.erase(13);
    cout <<"after erase"<<endl;
    for(auto i :m){
        cout<<i.first << " " <<i.second<<endl;
    }

    // auto it = m.find(5);

    // for(auto i=it ; i!=m.end();i++){
    //     cout<<(*i).first<<endl;
    // }
}