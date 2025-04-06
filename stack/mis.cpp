#include<iostream>
using namespace std;
class X;
class A
{
    int x;
    public:
    void get()
    {
       x=5;
    }
    void put()
    {
       cout<<x<<endl;
    }
    friend void swap(A&,X&);
};
class X
{
    int y;
    public:
    void get()
    {
      y=10;
    }
    void put()
    {
       cout<<y;
    }
    friend void swap(A&,X&);
};
int main()
{
    A obj1;
    X obj2;
    obj1.get();
    obj2.get();
    swap(obj1,obj2);
    obj1.put();
    obj2.put();
    return 0;
}
void swap(A& obj1,X& obj2)
{
    int t=obj1.x;
    obj1.x=obj2.y;
    obj2.y=t;
}