#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main(){
	string str;
    string d;
    bool aa =true;
	cin>>str;
    d=str;
    
	reverse(str.begin(),str.end());
    cout<<"str is " <<str<<endl;
    cout<<"d is " <<d<<endl;

    int n=str.size();
    for(int i=0;i<n;i++){
        
        if(str[i]==d[i]){
            continue;
        }
        else
        {
            cout<<"no";
            exit(0);
        }
    }
    if(aa){
        cout<<"yes";

    }
    return 0;
}
