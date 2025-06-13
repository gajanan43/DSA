 #include<iostream>
 #include<cstring>
 #include<map>
 using namespace std;
 
 //Map is an associate array
 int main(){
    map<string,int>marks;
    marks ["Harry"]=98;
    marks ["Gajanan"]=98;
    marks ["Yash"]=98;
    marks.insert({{"Kozume"s,169},{"Kuroo",187}});
    map<string,int>::iterator iter;
    for(iter=marks.begin();iter!=marks.end();iter++)
    {

       cout<<(*iter).first<<" "<<(*iter).second<<"\n"; 
    }
    cout<<"The size is:"<<marks.size()<<endl;
    cout<<"The maximum  size is:"<<marks.max_size()<<endl;
    cout<<"The empty size is:"<<marks.empty()<<endl;
    return 0;
 }