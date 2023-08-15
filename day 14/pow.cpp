#include<iostream>
using namespace std;
int pow(int a , int b){
    int i;
    int ans=1;
    for(i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    int w=pow(a,b);
    cout<<w;
}