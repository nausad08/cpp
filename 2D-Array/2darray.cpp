#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int target,int row,int col){
   for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;      
}
              //ROW WISE SUM----> I=ROW,j= COL >
void printRowSum(int arr[][4],int row, int col){

   for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
      cout<<sum<<" ";
    }
    cout<<endl;
}
            //COLUMN WISE SUM---->
void printCOLSum(int arr[][4],int row, int col){

   for(int j=0;j<4;j++){
        int sum=0;
        for(int i=0;i<3;i++){
            sum+=arr[i][j];
        }
      cout<<sum<<" ";
    }
    cout<<endl;
}
        //largest row sum ------------------------->
int largestrowsum(int arr[][4],int row, int col){
       int maxi = -9999;
       int rowIndex=-1;
    for(int i=0;i<3;i++){
        int sum=0;
        
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
      if(sum>maxi){
        maxi=sum;
        rowIndex=i;
      }
    }
     cout<<"the maximum  row sum is:-->"<<maxi<<endl; 
     return rowIndex;
}  

void transpose(int arr[][4], int r , int c){
    for(int i=0;i<r; i++){
        for(int j=0; j<c ; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

void printArray(int arr[][4],int r, int c){
    for(i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

                 // < ------------------------->
int main(){
    int arr[3][4];
    //int arr[3][4]={1,2,3,4,5,6,7,8,9,0,1,2};
    //int arr[3][4]={{1,5,6,8},{4,8,9,0},{6,9,0,7}};
 //taking input-> row wise
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

//taaking input  col wise
    // for(int j=0;j<4;j++){
    //     for(int i=0;i<3;i++){
    //         cin>>arr[i][j];
    //     }
    // }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"Enter the element to search"<<endl;
    int target;
    cin>>target;
    if(isPresent(arr,target,3,4)){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    cout<<"row wise sum:->"<<" ";
    printRowSum(arr,3,4);
    cout<<"column sum:->"<<" ";
    printCOLSum(arr,3,4);
    cout<<"largest row index"<<largestrowsum(arr,3,4);
return 0;
}