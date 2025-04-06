#include<stdio.h>
struct me
{
    int i;
    float j;

};

void main()
{
    struct me s;
    int *ptr;
    ptr=&s.i;
}