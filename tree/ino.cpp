#include<iostream>
#include<math.h>
using namespace std;
//class peri;
class area{
    public:
    void rect(float a,float b){
        float area=a*b;
        cout<<area<<endl;
    }
    void squar(float a){
        float area=a*a;
        cout<<area<<endl;
    }
    void circl(float r){
        float area=3.14*r*r;
        cout<<area<<endl;
    }
    void triang(float a,float b,float c)
    {
        float S=(a+b+c)/2;
        float result=S*(S-a)*(S-b)*(S-c);
        float area=sqrt(result);
        cout<<area<<endl;

    }
};
class prei{
    public:
    void rect(float a,float b){
        float perim=2*(a+b);
        cout<<perim<<endl;
    }
    void squar(float a){
        float perim=4*a;
        cout<<perim<<endl;
    }
    void circl(float r){
        float perim=3.14*r*2;
        cout<<perim<<endl;
    }
    void triang(float a,float b,float c)
    {
        float perim=a+b+c;
        cout<<perim<<endl;

    }
};
int main(){
    area s;
    prei z;
    s.rect(2,3);
    s.squar(2);
    s.circl(2);
    s.triang(2,3,4);
    z.rect(2,3);
    z.squar(2);
    z.circl(2);
    z.triang(2,3,4);
    return 0;

}