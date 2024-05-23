#include<iostream>
using namespace std;

bool linearsearch(int *arr, int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        return linearsearch(arr+1,size-1,key);
    }

}
 

 int getsum(int*arr,int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remainingpart=getsum(arr+1,size-1);
    int sum=arr[0]+remainingpart;
    cout<<sum<<endl;
    return sum;
 }
int main(){
     int arr[5]={2,4,6,8,9};
    int size=5;
    int key=88;
    //cout<<getsum(arr,size)<<endl;
    bool ans=linearsearch(arr,size,key);
    if(ans){
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
    }
return 0;
}