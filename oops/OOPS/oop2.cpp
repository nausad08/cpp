#include<iostream>
using namespace std;

class Human{

    public:
    int weight;
    protected:
    int height;
    private:
    int age;
    public:
    int getage(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }
 };

 //male inherit korche human theke

    class Male:protected Human{
        public:
        string color;
        void sleep(){
            cout<<"male sleeping"<<endl;
        }
        int getheight(){
            return  this->height;
        }
    };


int main(){
     Male m1;
     cout<<m1.getheight()<<endl;
       





    // Male object1;
    // cout<<object1.age<<endl;
    // cout<<object1.weight<<endl;
    // cout<<object1.height<<endl;
    // cout<<object1.color<<endl;
    // object1.setWeight(54);
    // cout<<object1.weight<<endl;

    // object1.sleep();
return 0;
  }