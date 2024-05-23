#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        //proceess till  n-1 index
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[6]={7,5,9,3,6,2};
    int n=6;
    BubbleSort(arr,n);
    for( int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}