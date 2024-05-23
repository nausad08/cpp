#include<iostream>
using namespace std;

 void insertionSort(int arr[],int n){
    for(int i=1; i<n; i++){
        int temp=arr[i];
        int j=i-1;
        for(; j>=0; j--){
            if(arr[j] > temp){
                //shift
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
 }
int main(){
    int arr[6]={7,6,4,3,2,9};
    int n=6;
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}