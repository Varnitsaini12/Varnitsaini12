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
    void delete_end();
    void delete_any();

    create();
    printf("\n");
    traverse();
    insert_beg();
    traverse();
    insert_end();
    traverse();
    insert_any();
    traverse();
    delete_beg();
    traverse();
    delete_end();
    traverse();
    delete_any();
    traverse();

}

void create()
{
    struct node *x, *y;
    char ch;
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
    x->link = NULL;
}

void traverse()
{
    struct node *ptr;
    ptr = first;
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }
}

void insert_beg()
{
    struct node *ins;
    int data;
    ins = (struct node *)malloc(sizeof(struct node));
    if (ins == NULL)
    {
        printf("Overflow");
    }
    printf("\nEnter the data you want to insert at beginning: ");
    scanf("%d", &data);
    ins->info = data;
    ins->link = first;
    first = ins;
    printf("Linked List after inserting at beginning: \n");
}

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
}

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

void delete_beg()
{
    if(first == NULL)
    {
        printf("Underflow!");
        exit;
    }
    struct node *x;
    x = (struct node *)malloc(sizeof(struct node));
    x = first;
    first = x->link;
    free(x);
    printf("\nLinked list after deletion the first element:\n");
}

void delete_end()
{
    struct node *x;
    struct node *y;
    x = (struct node *)malloc(sizeof(struct node));
    y = (struct node *)malloc(sizeof(struct node));
    x = first;
    while (x->link!=NULL)
    {
        y = x;
        x = x->link;
    }
    y->link = NULL;
    free(x);
    printf("\nThe Linked List after deletion of last element:\n");
}

void delete_any()
{
    struct node *x;
    struct node *y;
    int data;

    x = (struct node *)malloc(sizeof(struct node));
    y = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data of node which you want to delete:\n");
    scanf("%d",&data);
    x = first;
    while(x->info!=data)
    {
        y  = x;
        x = x->link;
    }
    y->link = x->link;
    free(x);
}