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
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
