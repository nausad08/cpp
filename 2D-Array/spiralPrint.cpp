#include<bits/stdc++.h>
using namespace std;

vector<int>print(vector<vector<int>>&matrix, vector<int>&ans){
   
    int m = matrix.size();
    int n = matrix[0].size();
    int total = n*m;
    int rowStart =0;
    int rowEnd = m-1;
    int colStart = 0;
    int colEnd = n-1;

    int count = 0;
    while(count<total){

        // print first row
        for(int i=colStart;i<=colEnd&& count < total;i++){
            ans.push_back(matrix[rowStart][i]);
            count++;
        }
        rowStart++;

        // print last column
        for(int i=rowStart;i<=rowEnd&& count < total;i++){
            ans.push_back(matrix[i][colEnd]);
            count++;
        }
        colEnd--;

        // print lasrt row

        for( int i=colEnd ;i>=colStart&& count < total;i--){
            ans.push_back(matrix[rowEnd][i]);
            count++;
        }
        rowEnd--;

        // print first column

        for(int i=rowEnd; i>=rowStart&& count < total; i--){
            ans.push_back(matrix[i][colStart]);
            count++;
        }
        colStart++;
    }
    return ans;
}

int main(){
    
    vector<vector<int> > matrix{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
        
      vector<int>ans;
      print(matrix,ans);
  
    for (auto x : ans) {
        cout << x << " ";
    }
return 0;
}