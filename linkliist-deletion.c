#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));
    struct node *fourth = malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 9;
    third->next = fourth;

    fourth->data = 10;
    fourth->next = NULL;
    //first delete
struct node*delF;
delF=head;
head=head->next;
free(delF);
//Mid delete
struct node*delM1;
struct node*delM2;
int pos=4;
delM1=head;
delM2=head;
while(pos !=3)
{
    delM2=delM1;
    delM1=delM1->next;
    pos--;
}
delM2->next=delM1->next;
free(delM1);
delM1=NULL;

    //last Delete
  struct node*delL1,*delL2;
   delL1=head;
   delL2=head;
   while(delL2->next!=NULL)
   {
       delL1=delL2;
       delL2=delL2->next;
   }
free(delL2);
delL2=NULL;
delL1->next=NULL;

    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}