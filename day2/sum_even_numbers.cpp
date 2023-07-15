#include<iostream>
using namespace std;
int main()
{
    int n;
    int i=0;
    int sum=0;
    cout<<"input value of n :";
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout<<sum;
}