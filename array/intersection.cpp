#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,2,3,4,6,8};
    vector<int> brr{5,3,4,10};

    vector<int> ans;

    for(int i=0;i<arr.size();i++){
        int el = arr[i];
        for(int j=0;j<brr.size();j++){
            if(el == brr[j]){
            brr[j]=-1;
               ans.push_back(el);
            }
        }
    }

    for(auto it:ans){
        cout<<it<<" ";
    }
return 0;
}