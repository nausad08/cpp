#include<iostream>
#include<queue>
using namespace std;
int main(){
    deque<int> d;
    d.push_front(12);
    d.push_front(2);
    d.push_back(23);


    cout<<d.front()<< " "<<d.back()<<endl;
    d.pop_back();
    d.pop_back();
     cout<<d.front()<< " "<<d.back()<<endl;
     
     d.pop_back();
     
     if(d.empty()){
        cout<<"queue is empty\n";
     }
     else{
        cout<<"not empty\n";
     }



return 0;
}