  //   -10 , -3 , 4 ,5 6
  //==> 100, 9, 16 ,25,36
  //==> 9, 16, 25 ,36,,100

#include<iostream>
#include<vector>
using namespace std;

void sortedSqureArrey(vector<int>&v){

    vector<int >ans;
    int i=0;
    int j=v.size()-1;

    while(i<j){
       if(abs(v[i])<abs(v[j])){
            ans.push_back(v[j]*v[j]);
            j--;

        }
        else {
            ans.push_back(v[i]*v[i]);
            i++;
        }
    }
    // reverse(ans.begin(),ans.end());
    for(int i=0;i<v.size();i++){
        cout<<ans[i]<<endl;
    }
}
int main(){
    int n;
     cin>>n;
     vector<int >v;
     for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
     }
     sortedSqureArrey(v);
return 0;
}