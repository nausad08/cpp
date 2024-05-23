#include<iostream>
using namespace std;

int getsum(int *arr,int n){ //*arr or arr[]
    cout<<endl<<"size:--"<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[6]={1,2,3,4,6,8};
    // char ch[6]="abcde";
    // cout<< arr<<endl;
    // cout<<ch<<endl;

    //  char*c=&ch[0];
    //  cout<<c<<endl;
    cout<<getsum(arr,5)<<endl;
    cout<<getsum(arr+3,3)<<endl;
return 0;
}