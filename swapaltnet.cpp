#include<iostream>
using namespace std;

int printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void alternetswap(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    // int even[8]={2,3,4,5,6,8,9,1};
    // int odd[5]={5,7,4,3,2};
    int n;cin>>n;
    int arr[n];
    for(int  i=0;i<n;i++){
        cin>>arr[i];
    }
    alternetswap(arr,5);
    printarray(arr,5);
    return 0;
}