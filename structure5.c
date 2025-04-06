#include<stdio.h>
struct you
{
    int roll;
};
void main()
{
    struct you s;
    struct you *ptr;//pointer to structure
    ptr=&s;
    //(*ptr).roll=15;
    ptr->roll=15;
}