#include<iostream>
using namespace std;

class param{
    public:
    int val;

    void operator+(param &obj2){
        int value1 = this->val;
        int value2 = obj2.val;
        cout<<value1-value2<<endl;
    }

};
int main(){

    param obj1,obj2;
     
     obj1.val = 3;
     obj2.val = 8;
     obj1+obj2;
return 0;
}