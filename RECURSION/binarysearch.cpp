#include<iostream>
using namespace std;

void print(int*arr, int s, int e){
    for(int i=s; i<e;i++){
        cout<<arr[i]<<" ";
    }
}

bool binarysearch(int arr[],int s,int e,int key){

    print(arr, s, e);

    cout<<endl;
    //base case
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]>key){
        return binarysearch(arr,s,mid-1,key);
    }
    else{
        return binarysearch(arr,mid+1,e,key);
    }
}
int main(){
     int arr[10]={1,3,5,7,8,9,45,67,78,99};
     int key=69;
     cout<<"present or not-->"<<binarysearch(arr,0,9,key)<<endl;
return 0;
}