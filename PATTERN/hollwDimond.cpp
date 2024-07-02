#include<iostream>
using namespace std;

void hollowDimond(int n){
    for(int row=0; row<n; row++){
        // space
        for(int col =0; col<n-row-1; col++){
            cout<<" ";
        }
        for(int col=0; col<2*row+1; col++){
            
            if(col==0 || col==2*row){
              cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    for(int row=0; row<n; row++){
        // space
        for(int col=0; col<row; col++){
            cout<<" ";
        }
        // staar
        for(int col=0; col<2*n-2*row-1; col++){
            if(col==0 || col ==2*n-2*row-1-1 ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}

int main(){
    int n; 
    cin>>n;
    hollowDimond(n);
    return 0;
}