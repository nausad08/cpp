#include<iostream>
using namespace std;

int partition(int a[], int s, int e){
    int pivot=a[s];
    int cnt=0;
    for(int i=s+1; i<=e; i++){
        if(a[i]<=pivot){
            cnt++;
        }
    }
    int pivotindex=s+cnt;
    swap(a[pivotindex],a[s]);

    //left and right part

    int i=s,j=e;
    while(i<pivotindex && j>pivotindex){
        while(a[i]<=pivot){
            i++;
        }
        while(a[j]>=pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(a[i++],a[j--]);
        }
    }
    return pivotindex;
}

void quicksort(int a[],int s, int e){
    //base case
    if(s>=e)
    return;
    //partition
    int p=partition(a,s,e);

    //left ppart sort
    quicksort(a,s,p-1);

    //right part soort

    quicksort(a,p+1,e);
}

 int main(){
    int a[5]={2,4,1,6,9};
    int n=5;
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

     return 0;
 }