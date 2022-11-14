#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>

struct node
{
    int info;
    struct node *lpt, *rpt;
};
struct node *first;

void main()
{
    void create();
    void forward_traverse();
    void backward_traverse();
    void insert_end();

    create();
    forward_traverse();
    backward_traverse();
    insert_end();
    forward_traverse();
}

void create()
{
    char ch;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter the info of first element:\n");
    scanf("%d", &ptr->info);
    ptr->lpt = NULL;
    first = ptr;
    do
    {
        struct node *cpt;
        cpt = (struct node *)malloc(sizeof(struct node));
        printf("Enter the info of next element:\n");
        scanf("%d", &cpt->info);
        ptr->rpt = cpt;
        cpt->lpt = ptr;
        ptr = cpt;
        printf("Press[Y/N] for more nodes:\n");
        ch = getch();

    } while (ch == 'y' || ch == 'Y');
    ptr->rpt = NULL;
}

void forward_traverse()
{
    struct node *x;
    x = first;
    printf("Forward Traverse:\n");
    while (x != NULL)
    {
        printf("%d\t", x->info);
        x = x->rpt;
    }  
}

void backward_traverse()
{
    struct node *y;
    y = first;
    while (y->rpt != NULL)
    {
        y = y->rpt;
    }
    printf("\n");
    printf("Backward Traverse:\n");
    while (y != NULL)
    {
        printf("%d\t",y->info);
        y = y->lpt;
    }
}

void insert_end()
{
    struct node *pptr;
    pptr = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the element you want to insert at the end:\n");
    scanf("%d",&pptr->info);
    struct node *x;
    x =first;
    while(x->rpt!=NULL)
    {
        x = x->rpt;
    }
    x->rpt = pptr;
    pptr -> lpt = x;
    pptr->rpt = NULL;
}
