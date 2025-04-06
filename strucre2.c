#include<stdio.h>
struct nobody
{
    int i;
    int *ptr;//pointer which refer to integer//member of structure is pointer
};
void main()
{
    struct nobody s;
    s.i=12;
    s.ptr=&s.i;
}