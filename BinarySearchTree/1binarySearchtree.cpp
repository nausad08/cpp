#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right= NULL;
    }
};

void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void preOrder(Node* root){
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postorder(Node * root){
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

Node* insertInToBst(Node* root,int d){

    //base case

    if(root == NULL){
        root = new Node(d);
        return root;
    }
    if(d> root->data){
        root->right = insertInToBst(root->right,d);
    }
    if(d< root->data){
        root->left = insertInToBst(root->left, d);
    }
    return root;
}


void takeInput(Node* &root){
    int data;
    cin>> data;
    while(data != -1){
       root = insertInToBst(root,data);
        cin>>data;
    }
}
        //   minimum value

Node* minVal(Node* root){
    Node* temp = root;
    while(temp->left!=NULL){
        temp = temp ->left;
    }
    return temp;
}
Node * maxVal(Node*root){
    Node*temp = root;
    while(temp->right!=NULL){
        temp =temp->right;
    }
    return temp;
}
Node* deleteFromBST(Node* root,int val){
    if(root ==NULL){
        return root;
    }

    if(root->data == val){
        //0 child
        if(root->left == NULL && root ->right ==NULL){
            delete root;
            return NULL;
        }

        //1child
        // left child 

        if(root->left != NULL && root ->right ==NULL){
             Node* temp = root->left;
             delete root;
             return temp;
        }
        //  right child

        if(root->left == NULL && root ->right !=NULL){
             Node* temp = root->right;
             delete root;
             return temp;
        }
        // 2child
        if(root->left != NULL && root ->right !=NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
            root ->right = deleteFromBST(root->right,mini);
            return root;
        }


    }
    else if(root->data > val){
        root-> left =deleteFromBST(root->left,val);
        return root;
    }
    else{
         root-> right =deleteFromBST(root->right,val);
        return root;

    }


}
void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp== NULL){
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else{
            cout<<temp->data <<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}

int main(){

    Node* root = NULL;
    cout<<"Enter data to create BST "<<endl;
    takeInput(root);
    cout<<"printing the bst  "<<endl;
    levelOrderTraversal(root);
    cout<<endl<<"printing inorder "<<endl;
    inOrder(root);
    cout<<endl<<"printing postorder "<<endl;
    postorder(root);
    cout<<endl<<"printing preorder "<<endl;
    preOrder(root);

    cout<<endl<<"minvalue is --> "<<minVal(root)->data<<endl;

    cout<<"max value ic --> "<<maxVal(root)->data<<endl;
    //delete
    deleteFromBST(root,50);
    levelOrderTraversal(root);


return 0;
}