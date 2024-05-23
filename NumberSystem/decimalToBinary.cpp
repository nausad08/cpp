#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n){
    int ans =0;
    int i=0;
    while(n>0){
         int bit = n%2;
        //   cout<<bit<<" ";
         ans =bit*pow(10,i++)+ans;
          n=n/2;
    }
    return ans;
   
}
int decimalToBinary2(int n){
    int ans =0;
    int i=0;
    while(n>0){
         int bit = n&1;
        //   cout<<bit<<" ";
         ans =bit*pow(10,i++)+ans;
          n=n>>1;
          cout<<n<<" ";
    }
    return ans;
   
}

int binaryToDecimal(int n) {
    int decimal = 0;
    int i=0;

    while(n) {
        int bit = n%10;
        decimal = decimal+bit*pow(2,i++);
        n=n/10;
    }
    return decimal;
}
int main(){
    // int n=5;
//    int ans = decimalToBinary(10);

    int n;
    cin>>n;
//     int ans =decimalToBinary2(n);
//    cout<<"bainary no is-- > "<<ans;

   int ans = binaryToDecimal(n);
   cout<<"decimal number of "<<n<<" is -> "<<ans;

return 0;
}