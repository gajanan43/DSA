#include<iostream>
#include<cstring>
using namespace std;

class Base
{
    protected:
    string title;
    float rating;

    public:
    Base(string s,float r)
    {
        title=s;
        rating=r;
    }
    virtual void display(){}
};

class Video:public Base
{
    float videolength;
    public:
    Video(string s,float r,float vl):Base(s,r)
    {
        videolength=vl;
    }
    void display()
    {
        cout<<"This is an amezing video title:"<<title<<endl;
        cout<<"Ratings:"<<rating<<"out of 5 stars"<<endl;
        cout<<"Length of the video is:"<<videolength<<" minutes"<<endl;
    }
};

class Text:public Base
{
    int words;
    public:
    Text(string s,float r,float wc):Base(s,r)
    {
        words=wc;
    }
    void display()
    {
        cout<<"This is an amezing tutorial with title:"<<title<<endl;
        cout<<"Ratings of this text tutorial:"<<rating<<"out of 5 stars"<<endl;
        cout<<"No of words in this text tutorial is:"<<words<<" words"<<endl;
    }
};
int main(){
    
    string title;
    float rating,vl;
    int words;

    //code for a harry video
    title="c++ tutorial";
    rating=4.58;
    vl=4.56;

    Video videoobj(title,rating,vl);
    videoobj.display();

    //code with a harry text
    title="c++ tutorial";
    rating=4.58;
    words=456;

    Text textobj(title,rating,words);
    textobj.display();
    return 0;
}