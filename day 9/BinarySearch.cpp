#include <iostream>
using namespace std;

int binarysearch(int arr[] , int size,int key){

    int start=0;
    int end=size-1;
    int mid=(start +end)/2;
    while(start<=end){
        if (arr[mid]==key){
            return mid;
        }
        else if (key >arr[mid]){
            start =mid +1;
        }
        else{
            start=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int arr[6]={1,2,3,4,6,8};

    int index=binarysearch(arr,6,6);
    cout<<index;
    return 0;
}
