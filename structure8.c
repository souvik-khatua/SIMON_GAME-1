#include<stdio.h>
struct me
{
    char name[20];
    int roll;

};

void main()
{
    struct me s ={"pankaj",10};
    printf("%s",s.name);
    printf(" %d",s.roll);
}