#include<bits/stdc++.h>
using namespace std;

void marge(int arr1[],int n,int arr2[],int m){
     int i=0,j=0,k=0;
     while(i<n && j<m){
     if(arr1[i]>arr2[j]){
        // arr[k]=arr2[j];
        // j++; k++;
        arr1[k++]=arr2[j++];
     }
     else {
        // arr[k]=arr1[i];
        // i++;  k++;
        arr1[k++]=arr1[i++];
     }
     }
     while(i<n){
        arr1[k++]=arr1[i++];
       // i++; k++;
     }
     while(j<m){
        arr1[k++]=arr2[j++];
       // j++; k++;
     }
}
    void print(int ans[],int n){
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
    } 

int main(){
    int arr1[9]={2,4,6,8,0,0,0,0,0};
    int arr2[5]={1,3,5,7,9};
  //  int arr1[9]={0};
    marge(arr1,4,arr2,5);
    print(arr1,9);
return 0;
}