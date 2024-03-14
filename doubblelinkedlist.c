#include<stdio.h> 
#include<stdlib.h> 
struct node{ 
    int data; 
    struct node *pre; 
    struct node *next; 
}; 
typedef struct node node; 
int main() 
{ 
    node *first , * second , * third , *ptr; 
    first=malloc(sizeof(node)); 
    second=malloc(sizeof(node)); 
    third=malloc(sizeof(node)); 
 
    first->pre=NULL; 
    first->data=1; 
    first->next=second; 
 
    second->pre=first; 
    second->data=2; 
    second->next=third; 
 
    third->pre=second; 
    third->data=3; 
    third->next=NULL; 

    //first insertion 
 
    node *prothom; 
    prothom=malloc(sizeof(node)); 
    prothom->pre=NULL; 
    prothom->data=21; 
    prothom->next=first; 
    first =prothom; 
 
    //middle_insertion 
 
    node*modde; 
    modde=malloc(sizeof(node)); 
    modde->pre=NULL; 
    modde->data=31; 
    modde->next=NULL; 
    int pos=3; 
    pos--; 
 
     node *temp; 
     temp=first; 
     while(pos != 1) 
     { 
        temp=temp->next; 
        pos--; 
     } 
    modde->next=temp->next; 
    temp->next=modde; 
 
 
    //last_insertion 
    node *last; 
    last=malloc(sizeof(node)); 
    last->pre=NULL; 
    last->data=41; 
    last->next=NULL; 
    third->next =last; 
    third=last; 
 
 
    //first_delete 
    node *del; 
    del=first; 
    first=first->next; 
    free(del); 
    del=NULL; 
 
    //midle_delete 
    node *del1, *del2; 
    del1=first; 
    del2=first; 
    int pos=3; 
    while(pos!=1) 
    { 
        del1=del2; 
        del2=del2->next; 
        pos--; 
    } 
    del1->next=del2->next; 
    free(del2); 
    del2=NULL; 
 
    //last_node 
    node *temp1 , *temp2; 
    temp1=first; 
    temp2=first; 
    while(temp2->next!=NULL) 
    { 
        temp1=temp2; 
        temp2=temp2->next; 
    } 
    temp1->next=NULL; 
    free(temp2); 
    temp2=NULL; 
 
 
 
    ptr=first; 
    while(ptr!=NULL) 
    { 
        printf("%d\n",ptr->data); 
        ptr=ptr->next; 
    } 
    return 0; 
}

