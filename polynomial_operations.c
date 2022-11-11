#include<stdio.h>
#include<malloc.h>

struct node{
    int info;
    int pow;
    struct node *link;
};struct node *first,*first1,*first2;

void main()
{
    void create1();
    void create2();
    void traverse1();
    void traverse2();
    void add();
    
    create1();
    create2();
    traverse1();
    traverse2();
    add(); 
}

void create1(){
    struct node *ptr,*cpt;
    int d;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter the info and pow of first term of first polynomial:\n");
    scanf("%d %d",&ptr->info,&ptr->pow);
    first = ptr;
    do
    {
    cpt = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the info and pow of next term of first polynomial:\n");
    scanf("%d %d",&cpt->info,&cpt->pow);
    ptr ->link = cpt;
    ptr = cpt;
    printf("\nPress[0/1] for more terms:\n");
    scanf("%d",&d);
    } while (d == 1);
    ptr->link = NULL;
}
void create2(){
    struct node *x,*y;
    int d;
    x = (struct node *)malloc(sizeof(struct node));
    printf("Enter the info and pow of first term of second polynomial:\n");
    scanf("%d %d",&x->info,&x->pow);
    first1 = x;
    do
    {
    y = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the info and pow of next term of second polynomial:\n");
    scanf("%d %d",&y->info,&y->pow);
    x ->link = y;
    x = y;
    printf("\nPress[0/1] for more terms:\n");
    scanf("%d",&d);
    } while (d == 1);
    x->link = NULL;
}

void traverse1(){
    printf("The first polynomial is:\n");
    struct node *z;
    z = first;
    while (z != NULL)
    {
        printf("%dx*%d ", z->info,z->pow);
        z = z->link;
    }
}
void traverse2(){
    printf("\nThe second polynomial is:\n");
    struct node *c;
    c = first1;
    while (c!= NULL)
    {
        printf("%dx*%d ", c->info,c->pow);
        c = c->link;
    }
}
void add()
{
    struct node *temp1,*temp2, *ptr,*cpt;
    temp1 = first;
    temp2 = first1;
    ptr = (struct node *)malloc(sizeof(struct node));
    first2 = ptr;
    if(temp1->pow > temp2->pow)
    {
        ptr->info = temp1->info;
        ptr->pow = temp1->pow;
        temp1 = temp1->link;
    }
    else if (temp1->pow < temp2->pow)
    {
        ptr->info = temp2->info;
        ptr->pow = temp2->pow;
        temp2 = temp2->link;
    }
    else
    {
        ptr->info = temp1->info + temp2->info;
        ptr->pow = temp1->pow;
        temp1 = temp1->link;
        temp2 = temp2->link;
    }
    while(temp1!=NULL && temp2!=NULL)
    {
        struct node *cpt;
        cpt = (struct node *)malloc(sizeof(struct node));
        if(temp1->pow > temp2->pow)
        {
            cpt->info = temp1->info;
            cpt->pow = temp1->pow;
            temp1 = temp1->link;
        }
        else if (temp1->pow < temp2->pow)
        {
            cpt->info = temp2->info;
            cpt->pow = temp2->pow;
            temp2 = temp2->link;
        }
        else
        {
            cpt->info = temp1->info + temp2->info;
            cpt->pow = temp1->pow;
            temp1 = temp1->link;
            temp2 = temp2->link;
        }
        ptr->link = cpt;
        ptr = cpt;
    }
    while(temp1!=NULL)
    {
        struct node *cpt;
        cpt->info = temp1->info;
        cpt->pow = temp1->pow;
        temp1 = temp1->link;
        ptr->link = cpt;
        ptr = cpt;
    }
    while(temp2!=NULL)
    {
        cpt->info = temp2->info;
        cpt->pow = temp2->pow;
        temp2 = temp2->link;
        ptr->link = cpt;
        ptr = cpt;
    }
    ptr ->link = NULL;
    printf("\n");
    struct node *x;
    x = first2;
    while(x != NULL)
    {
        printf("%dx*%d ",x->info,x->pow);
        x = x->link;
    }
}