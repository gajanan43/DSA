#include<iostream>
using namespace std;

class student
{
    protected:
        int roll_number;

    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void student::set_roll_number(int r)
{
    roll_number=r;
}

void student::get_roll_number()
{
    cout<<"The roll number of student is:"<<roll_number<<endl;
}

class Exam:public student
{
    protected:
        float maths,physics;

    public:
        void set_marks(float,float);
        void get_marks(void);
};

void Exam::set_marks(float m1,float m2)
{
    maths=m1;
    physics=m2;
}

void Exam::get_marks()
{
    cout<<"The marks of maths are:"<<maths<<endl;
    cout<<"The marks of physics are:"<<physics<<endl;
}

class Result:public Exam
{
    float percentage;

    public:
        void dispaly()
        {
            get_roll_number();
            get_marks();
            cout<<"Percentage of sutdent is:"<<(maths+physics)/2<<"%"<<endl;
        }
};
int main(){
    Result r;
    r.set_roll_number(42);
    r.set_marks(94,90);
    r.dispaly();
    return 0;
}