#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<"enter value of n :";
    cin>>n;
    if(n>='A' && n<='Z'){
        cout<<"It is a Capital letter";
    }
    else if(n>='a' && n<='z'){
        cout<<"It is a small letter";
    }
    else if(n>='0' && n<='9'){
        cout<<"It is a numeric value";
    }
    else{
        cout<<"It is something else";
    }
}