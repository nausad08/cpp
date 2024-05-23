#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    //base case
    if(size==0|| size==1)
      return true;
    if(arr[0]>arr[1]){
      return false;
    }  
    else{
      bool remainingpart=isSorted(arr+1,size-1);
      return remainingpart;
    }
}
int main(){
    int arr[5]={2,4,6,8,9};
    int size=5;
    int ans=isSorted(arr,size);
    //cout<<ans<<endl;
    if(ans){
      cout<<"array is sorted\n";
    }
    else{
      cout<<"not\n";
    }
return 0;
}