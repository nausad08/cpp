#include<iostream>
using namespace std;

int power(int n){
    //base case
    if(n==0)
        return 1;

    //recursive relation
    return 2*power(n-1);
}

//-----------------FACTORIAL------------------->>

int factorial(int n){
    //base case
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
            // -----TAIL RECURSION----------------------->>--

void print(int n){
    //base case
    if(n==0) {
        return ;
    }

    cout<<n<<endl;;
 print(n-1);   // void function no return
}

//--------------HEAD RECURSION------------------------->>

void print1(int n){
    //base case
    if(n==0) {
        return ;
    }
 print1(n-1);   // void function no return
    cout<<n<<endl;;

}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    //cout<<factorial(n);
    // int ans= power(n);
    // cout<<ans<<endl;

    print1(n);
return 0;
}