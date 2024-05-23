#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    //constructure

     node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
     }
     node(int data1,node* next1,node* back1){
        data = data1;
        next = next1;
        prev = back1;
     }

     //destructer

     ~node(){
        int val = this ->data;
        if(next != NULL){
            delete next;
            next= NULL;
        }

        cout<<" memory free for node with data "<<val<<endl;
     }
};


//================= PRINT =============


void print(node* head){
    node* temp= head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//================= LENGTH=================

int getLength(node* head){
    node* temp= head;
    int len=0;
    while(temp!= NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

// =================aRRAY TO LINKEDLIST ==========

node * convertArr2LL(vector<int>arr){
    node* head = new node(arr[0]);
    node* prev = head;

    for(int i=1; i<arr.size();i++){
        node * temp = new node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    } 
    return head;

}

// ========================= INSERTION============

void insertAtHead(node * &head,node * &tail, int d){

    if(head==NULL){
       node* temp= new node(d);
       head=temp;
       tail=temp;
    }
    else{
    node* temp= new node(d);
    temp->next=head;
    temp->prev= NULL;
    head->prev=temp;
    head= temp;
    }
}

void insertAtTail(node* &head,node* &tail,int d){
    if(tail== NULL){
        node* temp = new node(d);
        tail= temp;
        head= temp;

    }
    else{
    node* temp=new node(d);
    temp->prev=tail;
    tail->next=temp;
     tail=temp;
    }
}

void insertAtPosition(node* &head,node* &tail, int pos,int d){
    //starting position
    if(pos==1){
        insertAtHead(head,tail,d);
        return;
    }
    node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp= temp-> next;
        cnt++;
    }
    //inserting last nodee

    if( temp->next == NULL){
        insertAtTail(head,tail,d);
        return;
    }
    node * nodeToInsert =new node(d);
    
    nodeToInsert->next = temp-> next;
    temp->next->prev=  nodeToInsert;
    temp->next=nodeToInsert;
     nodeToInsert->prev= temp;
}

//-=-===-=--=-=-=---=======\ D3LETTION \======================
 
 void deleteNode(int pos, node* &head, node* &tail){
    //deleting the first node
    if(pos==1){
        node* temp= head;
        temp->next->prev = NULL;
        head= temp->next;
        temp -> next= NULL;
        delete temp;
    }
    else{
        node* prev = NULL;
        node* curr = head;
        int cnt=1;
        while(cnt<pos){
            prev= curr;
            curr = curr-> next;
            cnt++;
        }
        curr->prev= NULL;
        prev->next =curr-> next;
        curr->next= NULL;

        // for handelling last node with tail

        if(curr->next == NULL){
            tail=  prev;
        }
        delete curr;

    }
 }

//  /=========================== REVERSSE DLL ============

node* reverseDLL(node* head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* prev1 = NULL;
    node* curr = head;
    while(curr!=NULL){
        prev1 = curr->prev;
        curr->prev = curr->next;
        curr->next = prev1;
        curr = curr->prev;
    }
    return prev1->prev;
}

int main(){
    vector<int> arr={8,38,93,93};
    node* head1 = convertArr2LL(arr);
    print(head1);
    cout<<endl;
  //  node* node1=new node(43);
    node* head=NULL ;
    node* tail=NULL ;
    //print(head);
    //cout<<getLength(head)<<endl;
    insertAtHead(head,tail,8);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    insertAtHead(head,tail,9);
    insertAtHead(head,tail,54);
    insertAtHead(head,tail,12);
    insertAtHead(head,tail,23);
    print(head);

    insertAtTail(head,tail,55);
    insertAtTail(head,tail,53);
    insertAtTail(head,tail,57);
    print(head);

    insertAtPosition(head,tail,1,76);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    print(head);

     deleteNode(9,head,tail);
     print(head);
     cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
return 0;
}