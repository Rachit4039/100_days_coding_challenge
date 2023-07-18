#include<iostream>
using namespace std;

bool oddeven(int a){
    if(a%2==0){
        return 1;
    }
    else {
        return 0;
    }

}
int main(){
    int a;
    cin>>a;
    if (oddeven(a)){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    

}