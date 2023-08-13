#include<iostream>
using namespace std;
#include<vector>
//initially capacity of vector is 0 and aftre every addition of any new value its capacity
 //becomes twice of the previous time .....ie. 0,1,2,4,8,16...
int main(){
    vector<int> v;

    cout <<"capacity of vector on creation is : "<<v.capacity()<<endl;

    v.push_back(1);
    cout <<"capacity of vector after addition of 1 is : "<<v.capacity()<<endl;


    v.push_back(2);
    cout <<"capacity of vector after addition of 2 is : "<<v.capacity()<<endl;

    v.push_back(3);
    cout <<"capacity of vector after addition of 3 is : "<<v.capacity()<<endl;

    cout<<"at start(0) positon "<<v.front()<<endl;
    cout<<"at last positon "<<v.back()<<endl;
    cout<<"at first positon "<<v.at(1)<<endl;
    cout<<"before pop"<<endl;
    for (int i:v){
        cout<<i<<" "<<endl;
    }
    cout<<"after pop"<<endl;
//takes out last element
    v.pop_back();
    for (int i:v){
        cout<<i<<" "<<endl;
    }
//creates a vector where all values are 1
    vector<int> a(5,1);
    for (int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
}


