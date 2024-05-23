#include<iostream>
using namespace  std;

bool isPossible(int arr[], int n,int m, int mid){
    int studentcnt=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentcnt++;
            if(studentcnt>m or arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}
int bokallocate(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    while(s<=e){
        int mid= s+(e-s)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int main(){
    int arr[4]={10,20,30,40};
    int m=2;
    int iindex=bokallocate(arr,4,2);
    cout<<iindex<<endl;
    return 0;

}