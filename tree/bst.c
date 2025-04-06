#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
};
struct node*createnode(int data)
{
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->left=NULL;
    n->right=NULL;
    n->data=data;
    return n;
}
void inOrder(struct node*root)
{
    if(root!=NULL)
    {
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
    }

}
int isBST(struct node*root)
{
    static struct node *prev=NULL;
    if(root!=NULL)
    {
        if(!isBST(root->left))
        return 0;
        if(prev!=NULL&& root->data<=prev->data)
        return 0;
        prev=root;
        return isBST(root->right);
    }
    else return 1;
}
int main()
{
    struct node*p=createnode(4);
    struct node*p1=createnode(2);
    struct node*p2=createnode(6);
    struct node*p3=createnode(1);
    struct node*p4=createnode(3);
    struct node*p5=createnode(5);
    struct node*p6=createnode(7);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;
    inOrder(p);
    printf("\n");
    printf("%d ",isBST(p));
    return 0;
    
}
