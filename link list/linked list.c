#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *create(int a[],int n)
{
    struct node*t,*last;
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=a[0];
    temp->next=NULL;
    last=temp;
    for(int i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    return temp;
}
void traverse(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }

}
int main()
{
    int A[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }
    struct node*first;
    first=create(A,5);
    traverse(first);
    return 0;
}