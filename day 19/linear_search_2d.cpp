#include <iostream>
using namespace std;


int main(){
    int a,b,i,j;
    
    cout<<"enter values of a and b :";
    cin>>a>>b;
    int arr[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    int target=4;
    bool found = false;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            if (arr[i][j]==target){
                found=true;
            }
        }
    }
    if(found){
            cout<<"found";
        }
        else{
            cout<<"not found";
        }
        cout<<endl;
        
    return 0;
}