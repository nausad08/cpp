#include<iostream>
using namespace std;
 
int istOca(int arr[],int n, int key){
    int s=0,e=n-1;
    int ans=-1;
    while(s < e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
             ans=mid;
            e=mid-1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int lastOca(int arr[],int n, int key){
    int s=0,e=n-1;
    int ans=-1;
    while(s < e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
             ans=mid;
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int main(){
    int arr[6]={1,3,4,4,4,6};
    int index=istOca(arr,6,4);
    int index1=lastOca(arr,6,4);
    cout<<"index of 4 is : "<<index<<" "<<index1<<endl;
    return 0;
}