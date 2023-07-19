#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int sum=a+b;
    int sub=a-b;

    if(sub<0){
        sub=sub*(-1);
    }
    cout<<sum<<endl;
    cout<<sub;
}