#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node*pre;
  struct Node*next;
};
int main()
{
    struct Node*head,*second,*third,*fourth;
    head =(struct Node*)malloc(sizeof(struct Node));
    head->data=7;
    head->pre=NULL;
    head->next=NULL;

  
    second=(struct Node*)malloc(sizeof(struct Node));
    second->data=8;
    second->next=NULL;
    second->pre=head;
    head->next=second;

    
    third=(struct Node*)malloc(sizeof(struct Node));
    third->data=9;
    third->pre=second;
    third->next=NULL;
    second->next=third;

    
    fourth=(struct Node*)malloc(sizeof(struct Node));
    fourth->data=10;
    fourth->pre=third;
    fourth->next=NULL;
    third->next=fourth;

    
    struct Node*ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }

    return 0;
}
