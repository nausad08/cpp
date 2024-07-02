#include<iostream>
using namespace std;

void hollwRect(int n, int m){
    for(int row=0; row<n; row++){
        if(row==0 || row == n-1){
            for(int col = 0; col<m; col++){
                cout<<"* ";
            }
            cout<<endl;
        }
        else{
            cout<<"* ";
            for(int col=0; col<m-2;col++){
                cout<<"  ";
            }
            cout<<"* "<<endl;
        }
    }
}

void holloTriangle(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            if(i==0 || j==0 || j==n-i-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

/*
  6 6
* * * * * *
*         *
*         *
*         *
*         *
* * * * * *
6
* * * * * *
*       *
*     *
*   *
* *
*
 */


int main(){
    int n,m;
    cin>>n;

//    hollwRect(n,m);
   holloTriangle(n);


    return 0;
}