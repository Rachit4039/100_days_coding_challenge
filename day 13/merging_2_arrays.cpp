#include<iostream>
using namespace std;
#include<vector>

  void merge(int arr[],int n,int arr2[],int m,int arr3[]){
    int i=0, k=0,j=0;
    while (i<n && j<m){
        if (arr[i]<arr[j]){
            arr3[k]=arr[i];
            k++;
            i++;

        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr3[k]=arr[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k]=arr2[i];
        k++;
        j++;
    }

}

void print(int ans[],int n){
    for (int i=0;i<n;i++){
        cout <<ans[i];
    }
}



int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[2]={1,73};
    int arr3[7]={0};
    merge(arr1,5,arr2,2,arr3);
    print(arr3,7);
    return 0;
}
