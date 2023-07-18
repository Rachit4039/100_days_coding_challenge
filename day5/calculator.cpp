#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b;
    char c;
    cout<<"enter numbers"<<endl;
    cin>>a>>b;
    cout<<"enter operation out of + - * / "<<endl;
    cin>>c;
    
    switch (c)
    {
    case '+':
        cout<<a+b;
        break;

    case '-':
        cout<<a-b;
        break;

    case '*':
        cout<<a*b;
        break;

    case '/':
        cout<<a/b;
        break;
    
        
    
    default:
        cout<<"Please input valid operation ";
        break;
    }
}
