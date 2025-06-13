#include<iostream>
using namespace std;

class Student
{
    protected:
    int roll_number;

    public:
        void set_number(int a)
        {
            roll_number=a;
        }

        void get_number(void)
        {
            cout<<"The roll number of Student is:"<<roll_number<<endl;
        }
};

class Marks:virtual public Student
{
    protected:
    float maths,physics;

    public:
    void set_marks(float m1,float m2)
    {
        maths=m1;
        physics=m2;
    }

    void get_marks(void)
    {
        cout<<"The marks of student in maths are:"<<maths<<endl;
        cout<<"The marks of student in physics are:"<<physics<<endl;
    }
};

class Sport:virtual public Student
{
    protected:
    float score;

    public:
    void set_score(int a)
    {
        score=a;
    }

    void get_score(void)
    {
        cout<<"The score of PT are:"<<score<<endl;
    }
};

class Result:public Marks,public Sport
{
    private:
    float total;

    public:

    void display()
    {
        total=maths+physics+score;
        get_number();
        get_marks();
        get_score();
        cout<<"Your total score is:"<<total<<endl;
    }

};

int main(){
    
    Result harry;
    harry.set_number(4200);
    harry.set_marks(60.6,99.0);
    harry.set_score(9);
    harry.display();
    return 0;
}