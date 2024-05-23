 #include<iostream>
 using namespace std;

void merge(int arr[],int s,int e){
    int mid=(s+e)/2;

     int len1=mid-s+1; //length of first array
     int len2=e-mid;   // ""        second
     
     int *first=new int[len1];
     int *second=new int[len2];

     //copy values
     int mainarrayindex=s;
     for(int i=0;i<len1;i++){
         first[i]=arr[mainarrayindex++];
     }

     mainarrayindex=mid+1;
     for(int i=0;i<len1;i++){
         second[i]=arr[mainarrayindex++];
     }   
     //mmerge two sorted array
        int index1=0, index2=0;  
        mainarrayindex=s;
        while(index1 < len1 && index2 < len2){
            if(first[index1] < second[index2]){
                arr[mainarrayindex++]=first[index1++];
            }
            else{
                arr[mainarrayindex++]=second[index2++];
            }
        }
        //for extraa element
        while(index1 < len1){
            arr[mainarrayindex++]=first[index1++];
        }
        while(index2 < len2){
            arr[mainarrayindex++]=second[index2++];
        }
        delete []first;
        delete []second;
     }
 void mergesort(int arr[],int s, int e){
       //basecase
       if(s>=e){
           return;
       }
       int mid=(s+e)/2;

        // left part sort

        mergesort(arr,s,mid);
        
        //right part sort

        mergesort(arr,mid+1,e);

        merge(arr,s,e);
 }
 int main(){
     int arr[15]={12,23,41,11,4,1,61,45,51,7,2,5,1,6,9};
     int n=15;
     mergesort(arr,0,n-1);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     return 0;
 }