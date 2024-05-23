#include<iostream>
using namespace std;

               ///FUNCTION OVERLOADING

class A {
    public:
    void say(){
        cout<<"he he boy"<<endl;
    }
    void say(char name){
        cout<<"he he boy222"<<endl;
    }
    void say(int name){
        cout<<"he he boy333"<<endl;
    }
};


                     //OPERATOR OVERLOADING

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+(B &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<value2-value1<<endl;

    }
    void operator( )(){
        cout<<"main bracket hoon"<<this->a<<endl;
    }

};

                     //METHODE OVERRIDDING

class Animal{
    public:
    void speak(){
        cout<<"spealking "<<endl;
    }
};
class dog :public Animal{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};

int main(){
    dog b;
    b.speak();



    //  A objectt;
    //  objectt.say();
    

    // B obj1,obj2;
    // obj1.a=5;obj2.a=8;
    // obj1+obj2;
    // obj1();
    // obj2();
    

return 0;
}