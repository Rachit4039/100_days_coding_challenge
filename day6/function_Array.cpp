#include <iostream>
using namespace std;
void printarray(int arr[],int size){
    int i;
    for (i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int number[5]={1,2,3,4,5 };
    printarray(number ,5);
    cout<<endl;
    int size=sizeof(number)/sizeof(int);
    cout<<size;
}