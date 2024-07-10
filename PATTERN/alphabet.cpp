#include<iostream>
using namespace std;

void pyramid(int n){
    for(int row=0; row<n; row++){
        int col;
        for(col=0; col<row+1; col++){
            char ch = col+'A';
            cout<<ch;
        }
        // // reversing

        for(int col=row; col>=1;col--){
            char ch=col+'A'-1;
            cout<<ch;
        }
        cout<<endl;
    }
    

}
int main(){
    int n;
    cin>>n;
    pyramid(n);
return 0;
}