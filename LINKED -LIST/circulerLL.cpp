#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    //constructer
    node(int d){
        this ->data= d;
        this->next =NULL;
    }

    //destructer

    ~node(){
        int val=this ->data;
        if(this->next != NULL){
            delete next;
            next= NULL;
        }
        cout<<" memory is free for node with data "<<val<<endl;
    }
};
//==================================== | insertion |===============================================================

void insertNode(node* &tail, int element, int d){

    //empty list

    if(tail == NULL){
        node * newNode= new node(d);
        tail= newNode;
        newNode->next= newNode;
    }
    else{
        //non empty list
        //assuming thst the element is present in the list
         
        node * curr= tail;
        while(curr->data != element){
            curr= curr->next;
        }

        //element found curr is  representing on element
        
        node* temp= new node(d);
        temp->next= curr ->next;
        curr->next =temp;
    }
}
//=========================================\DELETE  \==============================================================

void deleteNode(node* &tail, int valu){

    if(tail== NULL){
        cout<<"list is empty pls ccheck again "<<endl;
        return;
    }
    else{
        //nonn empty
        //assuming that value is present in list
        node* prev= tail;
        node* curr= prev->next;

        while(curr->data != valu){
            prev = curr;
            curr= curr->next;
        }
        prev->next= curr->next;

        // 1 node linked list

        if(curr== prev){
            tail = NULL;
        }
        // >=2 node ll
        if(tail== curr){
            tail= prev;
        }
        curr->next= NULL;

        delete curr;
    }


}
//========================================================================================================

void print(node* tail){
    node* temp= tail;

    if( tail== NULL){
        cout<< "kist is empty\n";
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail= tail->next;
    }while(tail!=temp);
    cout<<endl;
}

//==============================================================================================================

bool isCirculerList(node*head){

    if(head== NULL){
        return true;
    }
    
    node* temp= head->next;
    while(temp!= NULL && temp!= head){
        temp= temp->next;
    }

    if(temp== head){
        return true;
    }
 return false;
}

int main(){
    node* tail= NULL;

    //empty node insert
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,88);
    print(tail);
    insertNode(tail,5,39);
    print(tail);

    // deleteNode(tail,39);
    // print(tail);
    
    if(isCirculerList(tail)){
        cout<<"Circuler in nature "<<endl;
    }
    else{
        cout<<"Not circuler "<<endl;
    }
return 0;
}