#include<iostream>
using namespace std;

int binarySearch( int arr[], int size, int key){
    int start=0;
    int end=size-1;

    while(start<=end){
        int mid=start + (end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int main(){
     int even[6]={2,4,6,8,11,18};
     int odd[5]={3,8,11,14,16};
     int index=binarySearch(even,6,8);
     cout<<"index of 8 is"<<index<<endl;
    return 0;
}