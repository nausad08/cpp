#include<bits/stdc++.h>
using namespace std;

class hero{
    //properties
    private:
     ///char low;
    int health;
   
    public:
    char level;
    int age;
    char *name;

    hero(){
        this->age = 0;
        cout<<"constructer called"<<endl;
        name =new char[100];
    }
               //paremeteruised constructure
               
    hero(int health){
        cout<<"this "<<this<<endl;
       this-> health=health;
    }

    
      hero(int health,char level){
        //cout<<"this "<<this<<endl;
       this-> health=health;
       this->level=level;
    }
    //copyconstructure
     hero(hero& temp){
         char *ch=new char[strlen(temp.name)+1];
         strcpy(ch,temp.name);
         this->name=ch;
        cout<<"copy constructercalled"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"health "<<this->health<<endl;
        cout<<"level "<<this->level<<endl;
        cout<<"name "<<this->name<<endl;
        cout<<endl;
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    int setHealth(int h){
        health=h;
    }
    char setLevel( char ch){
        level=ch;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }

    //destructor
    ~hero(){
        cout<<"destructor called "<<endl;
    }
};
int main(){

    //static
    hero a;
   cout<<sizeof(a)<<endl;
    //dynamic

    hero *b=new hero();
    delete b;  //manually destructure called


 return 0;
}














    // hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('d');
    // char name[7]="babbar";
    // hero1.setname(name);
   // hero1.print();

    


//use default copy constructer
 
// hero hero2(hero1);
 //hero2.print();

 //hero1.name[0]='G';
  //  hero1.print();

//hero1.name[0]='G';
    //hero2.print();


               //copy assign operator

    // hero1=hero2;
    // hero1.print();
    // hero2.print();


// hero suresh(23,'d');
// suresh.print();
//  //copy coonnstructor
//  hero r(suresh);
// r.print();

 

                   //object created sytatcally
// cout<<"hi\n";
//    hero ramesh(10);
//    cout<<"address of ramesh "<<&ramesh<<endl;
//    ramesh.getHealth();


                 // //dynamically
// hero* b=new hero;





              //static allocation
// hero a;
// a.setHealth(56);
// a.setLevel('y');
// cout<<"level is "<<a.level<<endl;
// cout<<"helth is "<<a.getHealth()<<endl; 

           // //dyanamically alllocation

// hero *b = new hero;
// b->setHealth(45);
// b->setLevel('k');
// cout<<"level is "<<(*b).level<<endl;
// cout<<"helth is "<<(*b).getHealth()<<endl;
//           ///or
// cout<<"level is "<<b->level<<endl;
// cout<<"helth is "<<b->getHealth()<<endl;


//                //creation of objecct

//     hero h1;
//     // .setHealth(45);  
//     cout<<"size of  :"<<sizeof(h1)<<endl;
//     //h1.health=56;
//     h1.level='d';
//     //cout<<"helth is"<<h1.health<<endl;
//     cout<<"level is "<<h1.level<<endl;
//    // cout<<" size "<<sizeof(h1)<<endl;
//    cout<<"helth is "<<h1.getHealth()<<endl;

// return 0;
// }