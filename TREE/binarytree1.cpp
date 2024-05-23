#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this-> right = NULL;
    }

};

node* buildTree(node* root) {
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;

    root= new node(data);

    if(data== -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right of"<<data<<endl;
    root->right= buildTree(root->right);

    return root  ;

}
//      ------------------------------LEVELORDER TRAVERSAL-----==============================

void levelOrderTraversal(node* root){
    queue<node*>q ;
    q.push(root);
    q.push(NULL); 

    while(!q.empty()){
        node* temp = q.front();
       
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        
        else{
             cout<<temp -> data <<" ";
        if(temp->left){  ///non null
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    } 

}

void reverseOrderTraversal(node* root){
    stack<node*>s;
    queue<node*>q;
    q.push(root);

    while(!q.empty()){
        node* temp= q.front();
        q.pop();
        s.push(temp);

        if(temp->right){
            q.push(temp->right);
        }
        if(temp->left){
            q.push(temp->left);
        }

        while(!s.empty()){
            temp=s.top();
            cout<<temp->data<<" ";
            s.pop();
        }
    }
}

void inOrder(node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void inOrderIte(node* root){
    stack<node*>s;
    node* curr=root;

    while(!s.empty() || curr!=NULL){
        while(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr=curr->right;
    }
}

void preOrder(node* root){
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postorder(node * root){
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void buildlevelOrdertra(node* root){
    queue<node*> q;
    cout<<"Enter data for root "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp= q.front();
        q.pop();

        cout<<"Enter left node for "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData!= -1){
            temp->left= new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData!= -1){
            temp->right=new node(rightData);
            q.push(temp->right);
        }
    }
}

int main(){

    /*node* root=NULL;

    //creating a tree
    root=buildTree(root);

    cout<<" printing the level order traverssal :"<<endl;

    levelOrderTraversal(root);
    cout<<" reversal  "<<endl;
    reverseOrderTraversal(root);

    cout<<"Inorder traversal "<<endl;
    inOrder(root);

    cout<<"preorder traversal "<<endl;
    preOrder(root);

    cout<<"postorder traversal "<<endl;
    postorder(root);
    */

    node *root =NULL;
    buildlevelOrdertra(root);
    levelOrderTraversal(root);


return 0;
}