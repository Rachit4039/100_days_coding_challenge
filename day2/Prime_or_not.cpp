#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    int i=2;
    while(i<n){
        if(n%2==0){
            cout<<"Not Prime";
            break;
        }
        else{
            cout<<"Prime";
            break;
        }
    i=i+1;
    }

}
