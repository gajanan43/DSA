#include <iostream>
#include <string.h>
using namespace std;

class Hero
{
    // Properties
private:
    int health;

public:
    char *name;
    char level;
    static int timetoCompelte;

    Hero()
    {
        cout << "Simple constructor called " << endl;
        name=new char[100];
    }

    Hero(int health, char level)
    {
        cout << "this->" << this << endl;
        this->health = health;
        this->level=level;
    }

    //copy constructor
    Hero(Hero& temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;

        cout<<"Copy  constructor called "<<endl;
        this->health=health;
        this->level=level;
    }

    void print()
    {
        cout<<"Name: "<<this->name<<" , ";
        cout<<"health: " <<this-> health << " , ";
        cout<<"level: " << this->level << endl;
    }

    // Getter ans Setter method
    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    static int random(){
        return timetoCompelte;
    }

    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};

int Hero :: timetoCompelte=5;

int main()
{
    //static keyword in function
    cout<<Hero::random()<<endl;

    // //static keyword   //Data member
    // cout<<Hero::timetoCompelte<<endl;

    // Hero a;
    // cout<<a.timetoCompelte<<endl;

    // Hero b;
    // b.timetoCompelte=10;
    // cout<<a.timetoCompelte<<endl;
    // cout<<b.timetoCompelte<<endl;

    // //static 
    // Hero a;

    // //Dynamic 
    // Hero *b=new Hero();
    // delete b;


    // Hero hero1;
    // hero1.setHealth(70);
    // hero1.setLevel('C');
    // char name[7]="Babber";
    // hero1.setName(name);

    // //  hero1.print();

    // //use a default copy constructor 
    // Hero hero2(hero1);
    // // hero2.print();

    // hero1.name[0]='G';
    // hero1.print();
    // hero2.print();

    // //copy assignment operator
    // hero1=hero2;
    // hero1.print();
    // hero2.print();


    // Hero suresh(70, 'C');
    // suresh.print();

    // //copy constructor
    // Hero r(suresh);
    // r.print();

    ////Constructor paramerterised and default constructor
    // //Static allocation
    // Hero ramesh(10);
    // cout<<"Address of ramesh is: "<<&ramesh<<endl;

    // //Dynamically allocation
    // Hero *h=new Hero;

    /*// static allocation
    Hero a;
    cout<<"Level of a is: "<<a.level<<endl;
    cout<<"Health of a is: "<<a.getHealth()<<endl;

    // Dynamic allocation
    Hero *h = new Hero;
    cout<<"Level of a is: "<<(*h).level<<endl;
    cout<<"Health of a is: "<<(*h).getHealth()<<endl;

    cout<<"Level of a is: "<<h->level<<endl;
    cout<<"Health of a is: "<<h->getHealth()<<endl;

    // Hero ramesh;

    // cout<<"Ramesh health is: "<<ramesh.getHealth()<<endl;

    // cout<<"Size of class "<<sizeof(ramesh)<<endl;
    // // cout<<"Health is: "<<ramesh.health<<endl;
    // cout<<"Level is:"<<ramesh.level<<endl;*/

    return 0;
}