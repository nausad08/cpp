#include<iostream>
using namespace std;
vector<int>waveprint(vector<vector<int>> arr, int nRows, int nCols){
   vector<int> ans;
  for(int col=0; col<nCols;col++){
        if(col&1){
            //odd index-->bottom to top
            for(int row=nRows-1;row>=0; row--){
                  ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row=0;row<nRows>; row++){
                  ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
int main(){
    
return 0;
}