#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node*next;

};
int main()
{
   struct Node*head,*body,*leg;
   head=(struct Node*)malloc(sizeof(struct Node));
   body=(struct Node*)malloc(sizeof(struct Node));
   leg=(struct Node*)malloc(sizeof(struct Node));

   head->data=12;
   body->data=23;
   leg->data=34;

   head->next=body;
   body->next=leg;
   leg->next=NULL;
 
 struct Node*ptr;
 for(ptr=head;ptr!=NULL;ptr=ptr->next)
 {
    printf("%d\n",ptr->data);
 }
}