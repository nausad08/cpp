#include<iostream>
using namespace std;

class Animal{
    public:  //protected //private
    int age;
    int weight;

    public:
    void bark(){
        cout<<"barking\n";
    }

};
 class dog: public Animal{

 };
//  class dog: protected Animal{
//     public:
//     void print(){
//         cout<<this->age<<endl;
//     }
//  };
 class gernmanshefard:public dog{

 };

class Human{
    public:
    string coor;
    public:
    void speak(){
    cout<<"speaking"<<endl;
    }
};

             //MULTIPLE INHERITANCE
  class hybrid:public Human,public Animal{

  };          
int main(){
        //multiple INHERITANCE
     hybrid d;
     d.speak();
     d.bark();

    // dog d;
    // d.speak();
    // cout<<d.age<<endl;
    // cout<<d.weight<<endl;

               //multileb
    
    // gernmanshefard d;
    // d.speak();
    // cout<<d.age<<endl;
return 0;
}