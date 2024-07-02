#include<iostream>
using namespace std;

void fullPyramid(int n){
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        for(int col=0; col<row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void invFullPyramid(int n){
    for (int row =0; row<n; row++){
        // space
        for(int col=0; col<row; col++){
            cout<<" ";
        }
        // star
        for(int col=0;col<n-row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
/*

     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *
* * * * * *
 * * * * *
  * * * *
   * * *
    * * 
     *
     *  */

int main(){

    int n; cin>>n; 
    fullPyramid(n);
    invFullPyramid(n);
    return 0;
}