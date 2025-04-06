#include<stdio.h>
//self referential structure//linked list
struct nobody
{
    int i;
    struct nobody *ptr;

};
void main()
{
    struct nobody s1,s2,s3;
    s1.i=10;
    s2.i=11;
    s3.i=12;
    s1.ptr=&s2;
    s2.ptr=&s3;
    s2.ptr=NULL;
}