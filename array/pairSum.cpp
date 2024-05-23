#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> arr{1,3,5,7};

    for(int i=0;i<arr.size(); i++){
        int ele = arr[i];
        for(int j=i+1;j<arr.size();j++){
            cout<<ele<<","<<arr[j]<<endl;
        }
    }
return 0;
}