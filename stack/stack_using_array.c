#include<stdio.h>
#include<stdlib.h>
struct stack
{
int size;
int top;
int * arr;
};
void push();
int pop();
int peek();
int stackTop();
int stackbottom();

int isEmpty(struct stack*ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else return 0;
}
int isFull(struct stack * ptr)
{
    if(ptr->top==ptr->size-1)
    retun 1;
    else return 0;
}
int main()
{
    struct stack *s;
    s->top=-1;
    s->size=80;
    s->arr=(int*)malloc(s->size*sizeof(int));
    if(isEmpty(s))
    {
        printf("the stack is empty");
    }
    else{
        printf("the stack is full");

    }
    return 0;
    

}