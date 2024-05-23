#include<iostream>
#include<queue>
using namespace std;
int main(){
    //creating a queue
    queue<int>q;
    q.push(4);
    cout<<"front of q is"<<q.front()<<endl;
    q.push(78);
     cout<<"front of q is"<<q.front()<<endl;
    q.push(8);
     cout<<"front of q is"<<q.front()<<endl;
    cout<<"size of queue"<<q.size()<<endl;

    q.pop();
     cout<<"front of q is"<<q.front()<<endl;
    q.pop();
     cout<<"front of q is"<<q.front()<<endl;
    q.pop();
     cout<<"front of q is"<<q.front()<<endl;
    cout<<"size of queue"<<q.size()<<endl;

    if(q.empty()){
        cout<<"queue is empty\n";
    }
    else{
        cout<<"not empty\n";
    }


     
return 0;
}