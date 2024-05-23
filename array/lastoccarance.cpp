#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    cout<<"enter x :";
    int x;
    cin>>x;

    int occa=-1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x)
    //     occa=i;
    // }/      OR
     for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
        occa=i;
        break;
        }
     }
    cout<<occa<<endl;
return 0;
}