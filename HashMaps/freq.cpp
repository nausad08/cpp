#include<iostream>
#include<unordered_map>
using namespace std;

// bool checkCirculer(Node* head){
//     unordered_map<node*,bool> vis;
//     Node* temp = head;
//     while(temp!= NULL){
//         if(vis.find(temp)!= vis.end()){
//             vis.[temp] = true;
//         }
//         else{
//             return true;
//         }

//     }
//     return false;

// }
int main(){
    string str = "thiruvananthapuramjcbxb";
    unordered_map< char,int> freq;
    
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        freq[ch]++;
    }

    // output
    for(auto i: freq){
        cout<<i.first<<" "<<i.second<<endl;
    }
return 0;
}