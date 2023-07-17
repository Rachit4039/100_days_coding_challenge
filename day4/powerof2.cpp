#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=2;
    while(n>0){
        if(n/i==2){
            cout<<"power of 2";
            i=i+2;
            break;
        }
        else{
            cout<<"not";
        }
    }    
}