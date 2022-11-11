#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char ch;

struct node
{
    int info;
    struct node *link;
};
struct node *first;

void main()
{
    void create();
    void traverse();
    void insert_beg();
    void insert_end();
    void insert_any();
    void delete_beg();

    create();
    traverse();
    insert_beg();
    traverse();
    insert_end();
    traverse();
    insert_any();
    traverse();
    delete_beg();
    traverse();
}

void create()
{
    struct node *x, *y;
    x = (struct node *)malloc(sizeof(struct node));
    printf("Enter the info of first element:\n");
    scanf("%d", &x->info);
    first = x;
    do
    {
        y = (struct node *)malloc(sizeof(struct node));
        printf("Enter the info of next element:\n");
        scanf("%d", &y->info);
        x->link = y;
        x = y;
        printf("Do you want add more node?Press[y/n]:\n");
        ch = getch();
    } while (ch == 'y' || ch == 'Y');
    x->link = first;
}

void traverse()
{
    struct node *ptr;
    ptr = first;
    while (ptr->link != first)
    {
        printf("%d, %lu ", ptr->info, ptr->link);
        ptr = ptr->link;
    }
    printf("%d, %lu", ptr->info, ptr->link);
}

void insert_beg()
{
    struct node *ptr;
    struct node *x;
    ptr = (struct node *)malloc(sizeof(struct node));
    int data;
    x = first;
    printf("\nEnter the element you want to insert at the beginning:\n");
    scanf("%d",&ptr->info);
    while(x->link != first)
    {
        x =  x->link;
    }
    x->link = ptr;
    ptr->link = first;
    first = ptr;
}

void insert_end()
{
    struct node *ptr;
    struct node *x;
    ptr = (struct node *)malloc(sizeof(struct node));
    int data;
    x = first;
    printf("\nEnter the element you want to insert at the end:\n");
    scanf("%d",&ptr->info);
    while(x->link != first)
    {
        x =  x->link;
    }
    x->link = ptr;
    ptr->link = first;
}

void insert_any()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    struct node *x;
    int pos,data;
     printf("\nEnter the info of element after which you want to insert the node: ");
    scanf("%d",&pos);
    printf("\nEnter the data you want to insert: ");
    scanf("%d",&data);
    ptr->info = data;
    x = first;
    while(x->info!=pos)
    {
        x = x->link;
    }
    ptr->link = x->link;
    x->link = ptr;
}

void delete_beg()
{
    struct node *x;
    struct node *y;
    x = (struct node *)malloc(sizeof(struct node));
    x = first;
    x->link = y;
    while(x->link != first)
    {
        x->link = x;
    }
    first = y;
    x->link = first;
    
    printf("\nCircular Linked list after deletion the first element:\n");
}