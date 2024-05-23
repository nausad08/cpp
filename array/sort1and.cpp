#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,0,1,0,0,1,1,0};

    int start=0; 
    int i=0;
    int end =arr.size()-1;

    while(start<=end){
        // for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                swap(arr[i],arr[start]);
                i++; start++;
            }

            else{
                swap(arr[i],arr[end]);
                end--; 
            }
        // }
    }
    for(auto it : arr){
        cout<<it<<" ";
    }
return 0;
}