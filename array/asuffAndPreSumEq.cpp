#include<iostream>
#include<vector>
using namespace std;

bool checkSuffixPrefixSum(vector<int>&v){
    int total_sum=0;
    for(int i=0; i<v.size();i++){
        total_sum+=v[i];
    }
    int prefix_sum=0;
    for(int i=0;i<v.size();i++){
        prefix_sum+=v[i];
        int suffixsum=total_sum-prefix_sum;
        if(suffixsum==prefix_sum){
            return true;
        }

    }
    return false;
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


return 0;
}