#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"input n:";
    cin>>n;
    int p=1;
    int s=0;
    while(n!=0){
        int a=n%10;
        p=p*a;
        s=s+a;
        n=n/10;
    }
    int answer=p-s;
    cout<<answer;
}