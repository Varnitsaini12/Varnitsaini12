#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *link;
};
struct node *Top;

int main(){
    // void create();
    void traverse();
    void push();
    void pop();

    // create();
    // traverse();
    // push();
    // traverse();
    // pop();
    // traverse();

    int choice;
    while(1){
        printf("\nOperations on Stack:\n");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.Exit\n");
        printf("\nEnter the choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:push();
            break;
        case 2:pop();
            break;
        case 3:traverse();
            break;
        case 4:exit(0);
        
        default: printf("\nInvalid Choice!");
        }
    }
    return 0;
}
// void create()
// {
//       struct node *x,*y;
//       int ch;
//       x= (struct node *)malloc(sizeof(struct node));
//       printf("Enter the info of x:");
//       scanf("%d",&x->info);
//       x->link =NULL;
//     do{
//       y = (struct node *)malloc(sizeof(struct node));
//       printf("Enter the info of next node:");
//       scanf("%d",&y->info); 
//       y->link=x;
//       x=y;
//       printf("Do you want to create more node? PRESS [0/1]:\n");
//       scanf("%d",&ch);
//     }
//   while( ch==1);
//   Top = x;
// }

void traverse(){
      struct node *z;
      z=Top;    
      while(z!= NULL)
      {
      printf("%d ",z->info);
      z=z->link;
      }
}

void push(){
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));

        new->link = Top;
    printf("\nEnter the data to be pushed into stack: ");
    scanf("%d",&new->info);
    Top = new;
    printf("Stack after pushing:\n");
}

void pop(){
    if(Top == NULL){
        printf("Stack underflow!\n");
    }
    else{
        struct node *ptr = Top;
        Top = Top->link;
        free(ptr);
    }
}