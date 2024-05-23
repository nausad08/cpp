#include<iostream>
using namespace std;

void update2(int& n){//refaraance vaariable
    n++;
   // cout<<n<<endl;
}
void update(int n){
    n++;
    cout<<n<<endl;
}
int main(){

    // int i=5;
    // //create refarance variable
    // int& j=i;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<< " " <<j<<endl;
    int n=5;
    cout<<"before:-"<<n<<endl;
    update2(n);
    cout<<"after:--"<<n<<endl;
return 0;
}