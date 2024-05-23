#include<iostream>
#include<vector>
using namespace std;
int uniqueElement(int arr[],int n){
    int  ans =0;

    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int array[]={2,3,5,2,6,3,5};
    int n=7;
    /*for( int i=0;i<n;i++){
        for( int j=i+1;j<n;j++){
            if(array[i]==array[j])
            array[i]=array[j]=-1;
        }
    }
    for( int k=0;k<n;k++){
        if(array[k]>0){
            cout<<array[k];
        }
    }*/
    int uniEle =uniqueElement(array,n);

    cout<<"unique element is "<<uniEle<<endl;
    
return 0;
}