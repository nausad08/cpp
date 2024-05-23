#include<iostream>
using namespace std;
             //  PALINDROME
// bool checkpalindrom(string arr){
//     int s=0;int e=arr.size()-1;
//     while(s<=e){
//         if(arr[s]!=arr[e]){
//             return 0;
//         }
//         else{
//             s++; e--;
//         }
//     }
//     return 1;
// }    

int findmin(int a[],int n){
    int count=0;
    int i=0,j=n-1;
    while(i<j){
        if(a[i]<a[j]){
            a[i+1]+=a[i];
            i++; count++;
        }
        else if(a[i]>a[j]){
            a[j-1]+=a[j];
            j--;count++;
        }
        else{
            i++;j--;
        }
    }
    return count;
}
int main(){
   int arr[] = { 6, 1, 4, 3, 1, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int min = findmin(arr, n);
    cout<<min<<endl;
 return 0;
}