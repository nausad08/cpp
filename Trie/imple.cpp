#include<iostream>
using namespace std;

class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch){
            this->data = ch;
            for(int i=0; i<26; i++){
                children[i] = NULL;
            }
            this->isTerminal = false;
        }
};

// class Trie { 
//     public:
//     TrieNode* root;

//     void insertUtil(TrieNode* root, string word){
//         if(word.length() == 0){
//             root->isTerminal = true;
//         }
//     }

// };
void deleteWord(TrieNode* root, string word){
    // base case
    if(word.length()==0){
        root->isTerminal =false;
        return;
    }
    char ch = word[0];
    int index = ch-'A';

    TrieNode* child;
    if(root->children[index]!= NULL){
        child = root->children[index];
        
    }
    else{
        cout<<"Word is not found, unable to delete"<<endl;
    }
    deleteWord(child,word.substr(1));
}
void insertWord(TrieNode* root, string word){
    // cout<<"inserting "<<word<<endl;
        // base case
    if(word.length() == 0){
        root->isTerminal = true;
        return;
    }
    char ch = word[0];
    int index = ch - 'A';
    TrieNode* child;
    // present
    if(root->children[index] != NULL){  
        child = root-> children[index];
    }
    else{
        // not present
        child = new TrieNode(ch);
        root->children[index] = child;
    }

    // bakki case recurrsion samalelga
    insertWord(child, word.substr(1));

}
bool searchWord(TrieNode* root, string word){
    // baase case
    if(word.length() == 0){
        return root->isTerminal;
    }

    char ch = word[0];
    int index = ch-'A';
    TrieNode* child;

    // present
    if(root->children[index]!=NULL){
        child = root->children[index];
    }
    else{
        return false;
    }
    // recurr call 
    return searchWord(child, word.substr(1));

}


int main(){
    TrieNode* root = new TrieNode('-');
    insertWord(root, "CODINGIII");
    insertWord(root, "CODIG");
    insertWord(root, "CODING");
    insertWord(root, "CING");
    insertWord(root, "CODEE");
    insertWord(root, "CODHELP");
    insertWord(root, "COD");

    cout<<"searching...."<<endl;
    if(searchWord(root,"COD")){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
    // deleting
    deleteWord(root,"COD");
    cout<<"searching...."<<endl;
    if(searchWord(root,"COD")){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
return 0;
}