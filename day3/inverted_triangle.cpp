#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"input n :";
    cin>>n;
    int i=0;
    while(i<n){
        int j=n;
        while(j>i){
            cout<<"*";
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
}