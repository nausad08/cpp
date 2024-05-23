#include<iostream>
using namespace std;

void saydigit(int n,string arr[]){
    //base case
    if(n==0)
     return;
   //processing
    int digit=n%10;
     n/=10;
     
     saydigit(n,arr);
     cout<<arr[digit]<<endl;

}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    saydigit(n,arr);
return 0;
}