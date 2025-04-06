#include<stdio.h>
/*int main()
{
    char *ptr="neeraj";
    *(ptr+3)='k';//not valid as neeraj stored in memory on read only area, can't make changes in neeraj's address
    printf("%s",ptr);
}*/

int main()
{
    printf("hello"+1);//outut: ello,work as a string ;"hello" return address of character 'h' while "hello"+1 return adress of character 'e'
   printf("%c",*("hello"+2));
    printf("%c","hello"[2]);//as a[i]=a(a+i)

 }
 