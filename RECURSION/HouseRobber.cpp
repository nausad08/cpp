#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int>& arr,int index) {
   int n = arr.size();
    if(index>=n) return 0 ;

    int include = solve(arr,index+2)+arr[index];
    int exclude = solve(arr,index+1)+0;

    int ans = max(include,exclude);
    return ans;
}
int main(){
    vector<int>arr{2,9};
    int sum = solve(arr,0);

    cout<<sum<<endl;
return 0;
}