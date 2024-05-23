#include <bits/stdc++.h>
using namespace std;

vector<int> prevSmaller(vector<int> &v){
    stack<int>s;
    s.push(-1);
    vector<int>ans(v.size());
    int n = v.size();

    for(int i=0; i<n; i++){
        int curr = v[i];

        while(s.top()>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }


    return ans;
}

vector<int> nextSmaller(vector<int> &input){
    stack<int>s;
    s.push(-1);

    vector<int>ans(input.size());
    int n = input.size();
    for(int i=n-1; i>=0; i-- ){
        int curr = input[i];

        while(s.top()>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}
using namespace std;
int main(){
    vector<int> input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);

    vector<int> ans1 = prevSmaller(input);

    cout<<"printing ans1 ; "<<endl;
    for(int i=0; i<ans1.size(); i++) {
        cout<<ans1[i]<<" ";
    }
    cout<<endl;


return 0;
}