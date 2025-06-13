#include<iostream>
using namespace std;

class point
{
    int a,b;

    public:
        point(int x,int y)
        {
            a=x;
            b=y;
        }

        void display()
        {
            cout<<"The point is ("<<a<<","<<b<<")"<<endl;
        }

};
int main(){
    point p(1,1);
    p.display();

    point q(5,6);
    q.display();
    return 0;
}