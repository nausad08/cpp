#include<iostream>
using namespace std;

void neuFullPyramid(int n) {
     for(int row=0; row<n; row++){
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        for(int col=0; col<row+1; col++){
            cout<<row+col+1;
        }
        // reverse 
        int ans = 2*row;
        for (int col = 0; col <row ; col++)
        {
            /* code */
            cout<<ans;
            ans-=1;
        }
        
        cout<<endl;
    }

}

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
    // fullPyramid(n);
    // invFullPyramid(n);
    neuFullPyramid(n);
    return 0;
}