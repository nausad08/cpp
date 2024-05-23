#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size){
        this->size= size;
        arr= new int[size];
        top =-1;

    }
 
    void push(int element){

        if(size- top> 1){
            // space available -- insert
            top++;
            arr[top]= element;
        }
        else{
            cout<<"stack overfloww\n";
        }

    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack undrflow\n";
        }
    }

// top
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty\n";
            return -1;
        }
    }
    int getSize(){
        return top+1;
    }

    bool isEmpty(){
        if(top== -1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){

    Stack st(5);

    st.push(33);
    st.push(23);
    st.push(2);

    cout<<st.peek()<<endl;
    st.pop();
     cout<<st.peek()<<endl;
     st.pop();
     cout<<st.peek()<<endl;
     st.pop();
     cout<<st.peek()<<endl;
 


    /*
    //creation of stack
    stack<int>s;

    //push operation
    s.push(2);
    s.push(4);

    //pop
    s.pop();

    cout<<"printing top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty\n";
    } 
    else{
        cout<<"not\n";
    }
    cout<<"size of stack "<<s.size()<<endl;*/
    
return 0;
}