#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int MinInd=i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[MinInd] ){
                MinInd=j;
            }
           
        }
         swap(arr[i],arr[MinInd]);
    }
}
int main(){
int arr[6]={9,6,5,7,2,3};
int n=6;
selectionSort(arr,n);
for( int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}