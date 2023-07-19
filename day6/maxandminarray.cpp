#include <iostream>
using namespace std;

int main(){
    int arr[4]={8,7,3,4};
    int a=arr[0];
    for(int i=0;i<4;i++){
        if (arr[i]>a){
            a=arr[i];
        }
    }
    cout<<a<<endl;

    int b=arr[0];
    for(int i=0;i<4;i++){
        if (arr[i]<b){
            b=arr[i];
        }
    }
    cout<<b;

}