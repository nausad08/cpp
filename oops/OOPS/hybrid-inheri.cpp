#include<iostream>
using namespace std;
             // hiararcy inheri
              
 class A {
    public:
    void func1(){
        cout<<"Inside function call\n";
    }
 };
//  class B:public A{
//     public:
//     void func2(){
//         cout<<"inside function call2\n"; 
//     }

// };
// class C:public A{
//     public:
//     void func3(){
//         cout<<"inside function call3\n";
//     }
// };
int main(){
    A obj;
    obj.func1();
    // B obj1;
    // obj1.func1();
    // obj1.func2();

    // C obj3;
    // obj3.func1();
    // obj3.func3;
return 0;
}