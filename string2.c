#include<stdio.h>
int main()
{
    char *p="pankaj";
    p="rahul";//it replaces adress of p for pankaj to adress of p to rahul thus yield p in printf, which is you can't do with array
    printf("%s",p);//here p gives address of first character and read it untill it get '/0'
}
int main()
{
    int arr[4];
    arr={10,20,30,40};//invalid declaration as array name is constant can't take l value
}
int main()
{

   int arr[4]={10,20,30,40};//valid
}
int main()
{
    char arr[10]="pankaj";
    char arr[10]="nerraj";//invalid
}
int main()
{
    char arr[10]="pankaj";
    arr[2]='m';//valid
}

