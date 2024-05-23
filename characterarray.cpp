#include<bits/stdc++.h>
using namespace std;

char toLower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
 
bool palindrom(char arr[],int n){
    int s=0;int e=n-1;
    while(s<=e){
        if(toLower(arr[s])!=toLower(arr[e])){
            return 0;
        }
        else{
            s++; e--;
        }
    }
    return 1;
}

void reverse(char name[],int n){
    int s=0; int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;  
}

char maxocccaChar(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
         number=ch-'a';
         arr[number]++;
    }
    //find maximum no occarance char
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
         if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
         }
    }
    return 'a'+ans;
}
int main(){
    // char name[20];
    // cin>>name;
    // int len=getLength(name);
    //  cout<<len<<endl;
    //  reverse(name,len);
    //  cout<<name<<endl;

    //  cout<<"palindrom or not :"<<palindrom(name, len)<<endl;
    string s;
    cin>>s;
    cout<<maxocccaChar(s)<<endl;
return 0;
}