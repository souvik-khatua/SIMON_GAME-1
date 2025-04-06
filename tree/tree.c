#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;//self referencial structure
};
struct node* crateNode(int data){
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;//finally c=return the created node
}
void preOrder(struct node*root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(struct node*root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
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
int main(){
 /*   //root node
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=2;
  p->left=NULL;
  p->right=NULL;
    struct node *p1;
    //left children
    p1=(struct node*)malloc(sizeof(struct node));
    p1->data=4;
  p1->left=NULL;
  p1->right=NULL;
  //right children 
    struct node *p2;
    p2(struct node*)malloc(sizeof(struct node));
    p2->data=1;
  p2->left=NULL;
  p2->right=NULL;
  //linking left and right
  p->left=p1;
  p->right=p2;*/
  //creating the root node using function
    struct node *p=crateNode(4);
    struct node *p1=crateNode(1);
    struct node *p2=crateNode(6);
    struct node *p3=crateNode(5);
    struct node *p4=crateNode(2);
    //struct node *p5=crateNode(4);
    //linking
     p->left=p1;
     p->right=p2;
     p1->left=p3;
     p1->right=p4;
     preOrder(p);
     printf("\n");
     postOrder(p);
      printf("\n");
      inOrder(p);
     return 0;
}
