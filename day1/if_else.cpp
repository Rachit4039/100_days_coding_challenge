#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"input value of n :" <<endl;
    cin>>n;
    if (n>0){
        cout<<"N is Positive";
    }
    else if(n<0){
        cout<<"N is negative";
    }
    else{
        cout<<"N is 0";
    }
}