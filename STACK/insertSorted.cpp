#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int>&st,int target){

    // base case
    if(st.empty()){
        st.push(target);
    }
    if(st.top() >= target){
        st.push(target);
        return;
    }

    int topEle = st.top();
    st.pop();

    // recurssion
    insertSorted(st,target);

    st.push(topEle);

    

}

void sortStack(stack<int>&st){
    if(st.empty()){
        return;
    }
    int topEle = st.top();
    st.pop();
    
    // recurssion
    sortStack(st);

    insertSorted(st,topEle);

}

int main(){

    stack<int>s;
    // s.push(30);
    // s.push(28);
    // s.push(26);
    // s.push(23);
    // s.push(20);
    // s.push(18);
    // s.push(10);

    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);
    
    // insertSorted(s,29);
    sortStack(s);

    cout<<"printing : -"<<endl;
    while (!s.empty()){
        cout<<s.top()<< " ";
        s.pop();
    }
    cout<<endl;

return 0;
}