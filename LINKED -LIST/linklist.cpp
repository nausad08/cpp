#include<iostream>
#include<map>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
           //constructure

    node(int data){
        this ->data=data;
        this -> next= NULL;
    }

          //destructure

    ~node(){
        int value= this -> data;
        //memory free
        if(this-> next != NULL){
            delete next;
            this ->next= NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

//===============================|  INSERTION |====================================================================


void insertAtHeadNode(node* &head,int d){

    //new n0de create
    node* temp= new node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(node* &tail,int d){
    node* temp=new node(d);
    tail->next = temp;
   // tail= tail->next;
    tail= temp;

}

void insertAtPosition(node* &tail,node* &head,int pos ,int d){
    if(pos==1){
        insertAtHeadNode(head,d);
        return;
    }
    node* temp =head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    node* nodeToInsert=new node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}
//=================================================  PRINT --------------------------------

void print(node* &head){
    node* temp=head;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

//===============================================| DELETE |================================

void deleteNode(node* & head,node* & tail,int pos){
    //for start node
    if(pos==1){
        node* temp= head;
      head = head->next;
      //then memory free start node
      temp->next=NULL;
       delete temp;
    }
    else{
        //deleting anyy midle node or last node
        node* prev=NULL;
        node* cur= head;
        int cnt=1;
        while(cnt<pos){
            prev= cur;
            cur=cur->next;
            cnt++;
        } 
        prev->next= cur->next;
        cur->next =NULL;

        //for last node tail handle
        
        if(cur->next == NULL){
            tail=prev;
        }
        delete cur;
        
       
    }

}

                        // OR  DELETING NODE 

 node* removeHead(node* head){
    if(head == NULL) return head;
    node* temp = head;
    head = head->next;
    delete temp;
    return head;
 }  
 node* removeTail(node* head){
    if(head == NULL || head->next == NULL) return NULL;
    node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return head;
 }  
 node* removeEle(node*head,int el){
    if(head ==NULL) return head;
    if(head->data == el){
        node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    node* temp =head;
    node* prev = NULL;
    while(temp!= NULL){
        if(temp->data ==el){
           prev->next = prev->next->next;
           delete temp;
           break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;

 } 

//=================================================================================================


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

//================================================================================================================

bool detectLoop(node* head){

    if(head== NULL){
        return false;
    }

    map<node*, bool > visited;

    node* temp = head;
    while(temp!= NULL){
        if(visited[temp]== true){
            cout<<"Present on element "<<temp->data<<endl;
            return true;
        }
        visited[temp]=true;
        temp= temp->next;

    }
    return false;
}

//===================| floyd detection |====================

node* floydDetectLoop(node* head){
    if(head == NULL){
        return NULL;
    }
    
    node* slow= head;
    node* fast= head;
    while(fast!=NULL&& slow!= NULL){
        fast=fast-> next;
        if(fast!= NULL){
            fast=fast->next;
        }
        slow=slow->next;

        if(slow==fast){
            cout<<"present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;

}

node* startingNode(node*head){
    if(head==NULL){
        return NULL;
    }

    node* intersection= floydDetectLoop(head);
    node* slow= head;
    while(slow!= intersection){
        slow = slow->next;
        intersection= intersection-> next;
    }
    return slow;
}

void removeLoop(node* head){
    if(head== NULL){
        return;
    }
    node* startOfLoop= startingNode(head);
    node* temp= startOfLoop;
    while(temp->next !=startOfLoop){
        temp=temp-> next;
    }
    temp->next= NULL;
}
//=================================================
node *removeDuplicates(node *head)
{
    // Write your code here
    node* curr = head;
    while(curr!= NULL){
        node* temp =curr->next;
        while(temp!= NULL){
            if(curr->data== temp->data){
                node* deletenode=temp;
                temp= temp->next;
                delete(deletenode); 
            }
            else{
                temp= temp->next;
            }
        }
        curr= curr->next;
    }
    return head;
}

//====================| main function  |==============================
int main(){
    node * node1= new node(23);
   // cout<<node1 ->data<<endl;
    //cout<<node1 ->next<<endl; 

    node* head=node1;
    node* tail=node1;
    //print(head);

   // insertAtHeadNode(head,34);
   insertAtTail(tail,87);
   insertAtTail(tail,89);
   insertAtTail(tail,87);
   insertAtTail(tail,9);
   insertAtTail(tail,8);
   insertAtTail(tail,9);
   insertAtTail(tail,8);

    print(head);

    tail->next= head->next->next;

    // insertAtPosition(tail,head,5,56);
    // cout<<"insert at position : \n";
    // print(head);

     cout<<"head "<<head->data<<endl;
     cout<<"tail "<<tail->data<<endl;
     
     


    // deleteNode(head,tail,6);
    // print(head); 

    /*cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    if(isCirculerList(head)){
        cout<<"Circuler in nature "<<endl;
    }
    else{
        cout<<"Not circuler "<<endl;
    }*/

    // if(detectLoop(head)){
    //     cout<<"Cycle is  preseant "<<endl;
    //  }
    //  else{
    //     cout<<" NOt present"<<endl;
    //  }

    if(floydDetectLoop(head)!= NULL){
        cout<<"Cycle is  preseant "<<endl;
     }
     else{
        cout<<" NOt present"<<endl; 
     }
     cout<<"starting at pos "<<startingNode(head)-> data<<endl;
     removeLoop(head);
     //removeDuplicates(head);
     print(head);
     print(head);

return 0;
}