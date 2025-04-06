#include<iostream>
using namespace std;
class student
{
    protected:
    int id;
    
    float E,H,Be,P,C,M,B;
    public:
    void get()
    {
        cout<<"enter the id"<<endl;
        cin>>id;
        cout<<"enter marks"<<endl;
        cin>>E>>H>>Be>>P>>C>>M>>B;

    }


};



class arts: public student{
    float n=(E+H+Be)/3;
    public:
    void ab()
    {
        if(n>=50)
        {
            cout<<"the student with "<<id<<" is eligable in arts"<<endl;
        }
        else { cout << "not eligiable"<<endl;}

    }
};

class medical: public student{
    float o=(P+C+B)/3;
    public:
    void cd()
    {
        if(o>=75)
        {
            cout<<"the student with "<<id<<" is eligable in med"<<endl;
        }
        else { cout << "not eligiable"<<endl;}

    }
};


class engineering: public student{
    float m=(P+C+M)/3;
    public:
    void bc()
    {
        if(m>=70)
        {
            cout<<"the student with "<<id<<" is eligable in engin"<<endl;
        }
        else { cout << "not eligiable"<<endl;}

    }
};


class cse: public engineering{
    float x=(E+H+Be+P+C+M+B)/3;
    public:
    void fry()
    {
        if(x>=75)
        {
            cout<<"the student with "<<id<<" is eligable in cse"<<endl;
        }
        else { cout << "not eligiable"<<endl;}

    }
};

class cse_ai: public engineering{
    float y=(E+H+Be+P+C+M+B)/3;
    public:
    void can()
    {
        if(y>=70)
        {
            cout<<"the student with "<<id<<" is eligable in ai"<<endl;
        }
        else { cout << "not eligiable"<<endl;}

    }
};


class ece: public engineering{
    float z=(E+H+Be+P+C+M+B)/3;
    public:
    void say()
    {
        
        if(z>=65)
        {
            cout<<"the student with "<<id<<" is eligable in ece"<<endl;
        }
        else { cout << "not eligiable"<<endl;}

    }
};


int main()
{
    student o0;
    arts o1;
    medical o2;
    engineering o3;
    cse o4;
    cse_ai o5;
    ece o6;


    o0.get();
    o1.ab();
   
    o2.cd();
    
    o3.bc();
    
    o4.fry();
    
    o5.can();
    
    o6.say();

    return 0;
}




