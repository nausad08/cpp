#include<iostream>
using namespace std;
 
// bool checkpalindrme(string str, int i,int j){
//     //base caSE
//     if(i>j)
//     return true;
    
//     if(str[i]!=str[j])
//        return false;

//     else{
//        return checkpalindrme(str,i+1,j-1);
         
//     }   
// }
bool checkpali(string str,int i){
   //base case
   int n=str.size();
   if(i>=n/2)
   return true;
   if(str[i]!=str[n-i-1]){
      return false;
   }
   
      return checkpali(str,i+1);
   
}
int main(){
   string str="aedcba";
   cout<<endl;
 //  bool ispalindrome=checkpalindrme(str,0,str.length()-1);
   bool ispalindrome=checkpali(str,0);

   if(ispalindrome){
      cout<<"palindrome\n";

   }
   else{
      cout<<"notpal\n";
   }
return 0;
}