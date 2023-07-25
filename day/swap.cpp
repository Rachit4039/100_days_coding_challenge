#include <iostream>
using namespace std;

void printArray(int arr[],int n) {
    for ( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlternte(int arr[] ,int size){
    for (int i=0;i<size;i+=2) {
        if(i+1 < size) {
            swap(arr[i],arr[i+1]);
        }
    }
}

int main() {
    int even[8]={5,6,7,3,4,5,22,5};
    // int odd[5]={11,3,43,2,4};
    swapAlternte(even ,8);
    printArray(even ,8);


    return 0;
}
