#include<iostream>
using namespace std;

int main(){
    int num=5;
    cout<<num<<endl;

    //address of operator--&

    cout<<"address of num is--> "<<&num <<endl;
    
    int *ptr=&num;

    cout<<"address is--> "<<ptr<<endl;
    cout<<"value is--> "<< *ptr <<endl;
      
       double d=4.6;
       double *p=&d;
       cout<<p<<endl;
       cout<<*p<<" "  <<sizeof(num)<<endl;
       double **q=&p;
       cout<<q<<" "<<*q<<" "<<**q<<endl;
return 0;
}