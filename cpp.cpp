#include<iostream>
#include<vector>
using namespace std;

int main(){
  int x =2;
  int *y = &x;

  cout<<x<<y<< "  "<<;
}




// bool isTri(int m){
//  int sum =0,i=1;
//   while(sum<m){
//    sum+=1;
//     if(sum==m){
//       return true;
//     }
//     i++;
//   }
//    return false; 
// }

// int main(){
//   vector<int>wt;
//   vector<int>ans;
//   int p,n,k;
//   while(cin>>p){
//     wt.push_back(p);
//   }
//   cin.clear();
//   cin>>n>>k;
  
//   int first = wt[0];
//   int ct =0;
//   int cycle =0;
//   int prev = first;
  
//   for(int i=1;i<wt.size(); i++){
   
//      if(first>=wt[i]){
//        ct++;
//        if(ct==n-1){
//          prev = first;
//          ct=0;
//          if(prev == first){
//            cycle++;
//          }
//          if(cycle==k) break;
         
         
//        }
//         ans.push_back(wt[i]);
//      }
//      else{
//        ans.push_back(first);
//        first = wt[i];
//      }
   
  
//   }
//   int sum =0;
//   for(int i=0; i<ans.size(); i++){
//     if(!isTri(ans[i])){
//       sum+=ans[i];
//     }
//   }
  
// cout<<sum<<endl;

// }