#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* convertArr2LL(vector<int>&arr){
    Node * head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;

}
int lenghtLL(Node* head){
    Node * temp = head;
    int ct =0;

    while(temp){
      
        temp = temp->next;
        ct++;
    }
    return ct;
}
int checkIsPresent(Node* head, int val){
    Node * temp = head;

    while(temp){
        if(temp->data == val){
            return 1;
        }
        temp = temp->next;
    }
    return 0;

}
int main(){
    vector<int>arr={12,3,4,99,5,6,7};
    Node* head = convertArr2LL(arr);
    Node * temp = head;

    while(temp){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<" Length of LINKEDLIST - > "<<lenghtLL(head)<<endl;
    cout<<" is present inn ll  - > "<<checkIsPresent(head,99)<<endl;


return 0;
}