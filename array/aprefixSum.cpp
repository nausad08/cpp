#include<iostream>
#include<vector>
using namespace std;

void prefixSum(vector<int>&v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum=sum+v[i];
        v[i]= sum;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    prefixSum(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
return 0;
}