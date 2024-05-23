#include<bits/stdc++.h>
using namespace std;

// void reverseArray(int arr[],int n){
// int  s=0,e=n-1;
// while(s<e){
//     swap(arr[s],arr[e]);
//     s++;
//     e--;
// }
//}
                  // USING VECTOR//
   vector<int>reverse(vector<int>v){
    int s=0, e=v.size()-1 ;
    while(s<e){
       swap(v[s],v[e]);
       s++;e--;
    }
    return v;
   }  
   void print(vector<int>v){
       for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
       }
   }   
             
int main(){
//     int arr[5]={8,6,9,4,0};
//     int n=5;
//     reverseArray(arr,n);
//  for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//  }
vector<int>v;
v.push_back(11);
v.push_back(9);
v.push_back(5);
v.push_back(3);
v.push_back(0);
vector<int>ans=reverse(v);
print(ans) ;

return 0;
}