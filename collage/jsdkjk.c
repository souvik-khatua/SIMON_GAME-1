#include<stdio.h>
int main()
{
    for(int i = 0; i < 16; ++i) {
    printf("%d%d%d%d", i/8%2, i/4%2, i/2%2, i%2);  
}
return 0;
}