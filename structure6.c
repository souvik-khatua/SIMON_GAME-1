#include<stdio.h>
struct dateof
{
    int day;
    int month;
};
struct student
{
    int roll ;
    char name[20];
    struct dateof dob;//nesting of structure
};

void main()
{
    struct student s;
    s.dob.day;
    s.dob.month;
}

