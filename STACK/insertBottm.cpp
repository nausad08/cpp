#include<iostream>
#include<stack>
using namespace std;

                        //  INSERT AT BOTTOM ---------------------------

void insertAtBottom(stack<int>&s, int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int temp = s.top();
    s.pop();
    insertAtBottom(s,target);
    s.push(temp);
}

        //   REVERSE STACK ------------------------------------------------
        
void reverseStack(stack<int>&s){
    if(s.empty()){
        return;
    }
    int target = s.top();
    s.pop();

    // recursiom
    reverseStack(s);
    insertAtBottom(s,target);
    return;
}
int main(){
     stack<int>s;
    s.push(23);
    s.push(10);
    s.push(12);
    s.push(14);
    s.push(16);
    s.push(18);
    s.push(19);
    // insertAtBottom(s,100);

    // cout<<"printing : -"<<endl;
    // while (!s.empty()){
    //     cout<<s.top()<< " ";
    //     s.pop();
    // }
    // cout<<endl;
    reverseStack(s);
    cout<<"printing : -"<<endl;
    while (!s.empty()){
        cout<<s.top()<< " ";
        s.pop();
    }
    cout<<endl;
    
    

return 0;
}