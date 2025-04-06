#include<stdio.h>
struct student
{
    char name[20];
    int roll;
};

void main()
{
    struct student s;
    struct student *ptr;//pointer to structrue
    ptr=&s;

}