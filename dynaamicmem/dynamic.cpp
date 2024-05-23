#include<iostream>
using namespace std;

int getsum(int *arr,int n ){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
     //variable size array
     int* arr=new int[n];
    
    //taking array input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<getsum(arr,n);
return 0;
}