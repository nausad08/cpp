#include<iostream>
using namespace std;

class abc {
    public:
    static int x,y;
    void print () {
        cout<<x<< " " << y<<endl;
    }
};
int abc::x;
int abc::y;

int main(){
    abc obj1;
    abc obj2;
    abc::x=3;
    obj1.y =9;
    obj1.print();
    obj2.print();
return 0;
}