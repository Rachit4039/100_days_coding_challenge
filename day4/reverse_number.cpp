#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    int a=0;
    cin>>n;
    while(n!=0){
        int m=n%10;
        a=(a*10)+m;
        n=n/10;
    }
    cout<<a;
}