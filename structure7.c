#include<stdio.h>
struct me
{
    char name[20];
    int roll;

};

void main()
{
    struct me s[2];//array of structure;
    s[0].roll=1;
    s[1].roll=2;
}