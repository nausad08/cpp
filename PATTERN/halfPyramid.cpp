#include<iostream>
using namespace std;

void halfPyramid(int n){
    for(int row =0; row<n; row++){
        for(int col=0 ; col< row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void neumericHalfPyramid(int n){
    for(int row =0; row<n; row++){
        for(int col=0 ; col< row+1; col++){
            cout<<col+1<<" " ;
        }
        cout<<endl;
    }
}
void invNeumericHalfPyramid(int n){
    for(int row =0; row<n; row++){
        for(int col=0 ; col< n-row; col++){
            cout<<col+1<<" " ;
        }
        cout<<endl;
    }
}

void invHalfPrymid(int n){
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    // halfPyramid(n);
//    invHalfPrymid(n);
   invNeumericHalfPyramid(n);

return 0;
}
/*
5
* * * * *
* * * *
* * *
* *
*
5
*
* *
* * *
* * * *
* * * * *
5
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
 */