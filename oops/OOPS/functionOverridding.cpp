#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void speak(){
        cout<<"Speaking..."<<endl;
    }

};

class Dog:public Animal {
    public:
    void speak() {
        cout<<"Barking..."<<endl;
    }

};
int main(){
    // Animal a;
    // Dog a;
    // a.speak();

    // dyanmically=================
    // Animal * a = new Animal();
    // a->speak();

    // Dog * d= new Dog();
    // d->speak();


    // upcasting
    Animal * a =new Dog();
    a->speak();

    // downcasting dog*b  =new Animal
    

return 0;
}