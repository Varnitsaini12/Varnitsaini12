#include <stdio.h>
#include<malloc.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node*first;

int main()
{
  void create();
  void traverse();
  void insert_end();
  void insert_beg();
  void insert_any();
 /* void delete_end();
  void delete_beg();
  void delete_any();*/
  create();
  traverse();
  insert_end();
  traverse();
  insert_beg();
  traverse();
  insert_any();
  traverse();
 /* delete_end();
  traverse();
  delete_beg();
  traverse();
  delete_any();*/
    return 0;
}
  //to create a linked LIST
  
  void create()
  {
      struct node *x,*y;
      int ch;
      x= (struct node *)malloc(sizeof(struct node));
      printf("enter the info of x:");
      scanf("%d",&x->info);
      first = x;
  do{
      y= (struct node *)malloc(sizeof(struct node));
      printf("enter the info of y:");
      scanf("%d",&y->info); 
      x->link=y;
      x=y;
      printf("do you want to create more node? PRESS [0/1]:\n");
      scanf("%d",&ch);
  }
  while( ch==1);
  x->link = NULL;
  }
  
  // TRAVERSE THE LINKED LIST
  void traverse()
  {
      struct node *z;
      z=first;
      while(z != NULL)
      {
      printf("%d ",z->info);
      z=z->link;
      }
      
  }
  //insertion of a node in existing linked LIST
  void insert_end()
  {
    struct node *ins_end;
    struct node *ptr;
    int data_end;
    ins_end = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data you want to insert at end: ");
    scanf("%d", &data_end);
    ins_end->info = data_end;
    ptr = first;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = ins_end;
    ins_end->link = NULL;
    printf("\nThe linked list after insertion at end:\n");
  }
  //insertion of a node at the beginning of the linked LIST
   void insert_beg()
   {
       struct node *ptr;
       int data;
       ptr= (struct node *)malloc(sizeof(struct node));
       if( ptr==NULL)
       {
           printf("overflow");
       }
       printf("\nenter the data in the node that we wanted to inserted at the beginning:\n");
       
           scanf("%d",&data);
           ptr->info=data;
           ptr->link =first;
           first=ptr;
           printf("linked list after insertion is :");
       
   }
   
          //insertion of node after any given data
          void insert_any()
  {
    struct node *ins_any;
    struct node *ptr;
    struct node *y;
    int pos,data;
    ins_any = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the info of element after which you want to insert the node: ");
    scanf("%d",&pos);
    printf("\nEnter the data you want to insert: ");
    scanf("%d",&data);
    ins_any->info = data;
    ptr = first;
    while(ptr->info!=pos)
    {
        ptr = ptr->link;
    }
    ins_any->link = ptr->link;
    ptr->link = ins_any;  
}