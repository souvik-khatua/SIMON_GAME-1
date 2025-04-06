#include<iostream>
using namespace std;

class A
{
    public:
     int x;
     public:
     void get(m)
     {
        x=m;
     }
     void put()
     {
        cout<<x<<endl;
     }
     friend void swap(A&, int&);


}

class B
{
    public:
     int y;
     public:
     void get(n)
     {
        y=n;
     }
     void put()
     {
        cout<<y<<endl;
     }
     friend void swap(B&, int&);
     


}


 void swap (A&obj1,B&obj2)
{
    int temp=obj1.x;
    obj1.x=obj2.y;
    obj2.y=temp;
}
int main()
{
    A obj1;
    B obj2;
    obj1.get(5);
    obj2.get(6);
    swap(obj1,obj2);
    obj1.put();
    obj2.put();
    return 0;
}