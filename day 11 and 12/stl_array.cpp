#include<iostream>
using namespace std;
#include<array>

int main(){
    array<int ,5> array={1,8,3,4,5};

    for (int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<array.front()<<endl;
    cout<<array.size()<<endl;
    cout<<array.back()<<endl;
    cout<<array.at(3)<<endl;
}

