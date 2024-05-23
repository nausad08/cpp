#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    // creation
    // unordered_map<string,int>m;       // O(n)
    map<string,int>m;                   //O(logn)

    //iteration
    // 1
    pair<string,int> p = make_pair("babbar",3);
    m.insert(p);
    
    // 2
    pair<string,int> p2("love",4);
    m.insert(p2);

    //3

    m["mera"] = 1;

    m["mera"]  = 2;

    cout<<m["mera"]<<endl;
    cout<<m["mera"]<<endl;
    cout<<m["meraaa"]<<endl;
    cout<<m.at("babbar")<<endl;
    // size

    cout<<m.size()<<endl;

    // to ckeck presence
    cout<<m.count("jfhfb")<<endl;

    // erase

    m.erase("love");
    cout<<m.size()<<endl;

    for(auto it :m){
        cout<<it.first<<"->"<<it.second<<endl;
    }
return 0;
}