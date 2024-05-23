#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int>&s, int &totalSize){
    // base case
    if(s.size() == totalSize/2+1){
        cout<<" Middle element is : "<<s.top()<<endl;
    }
    int temp = s.top();
    s.pop();

    // recurssion call
    printMiddle(s,totalSize);
    s.push(temp);


}
int main(){
    stack<int>s;
    s.push(23);
    s.push(10);
    s.push(12);
    s.push(14);
    s.push(16);
    s.push(18);
    s.push(19);

    int totalSize = s.size();
    printMiddle(s,totalSize);
    
return 0;
}