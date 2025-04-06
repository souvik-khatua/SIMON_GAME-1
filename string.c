#include<stdio.h>
int main()
{
    char arr[10]="pankaj";
    printf("%s",arr);//here arr is gives adress of arr[0] and read it untill it got '/0'
    printf(" %s",&arr[1]);//here &arr[1] gives adress of arr[1]
    printf(" %s",arr+1);//here arr+1 gives adress of arr[1]
    printf(" %c",*(arr+1));//here *(arr+1) gives value at arr[1]


}