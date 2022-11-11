#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;

};
struct node * front = NULL;
struct node * rear = NULL;

void insert();
void delete();
void show();

int main(){
    int choice, val;
    while(1){
         printf("Queue using Linked List\n");
        printf("1.Insertion\n2.Deletion\n3.Show\n4.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        
        default: printf("Invalid Choice!");
            break;
        }
    }
    return 0;
}

void insert(){
    int val;
    printf("Enter the value you want to insert:\n");
    scanf("%d",&val);
    struct node * ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("Overflow");
        exit(0);
    }
    ptr->data = val;
    ptr->next = NULL;
    if((front == NULL)&&(rear == NULL)){
        front = ptr;
        rear = ptr;
    }
    else{
        rear -> next  = ptr;
        rear = ptr;
    }
}

void delete(){
    if (front == NULL) {
        printf("\nUnderflow\n");
        
    } else {
        struct node * temp = front;
        int data = front -> data;
        front = front -> next;
        free(temp);
    }
}

void show(){
    struct node * temp;
    if ((front == NULL) && (rear == NULL)) {
        printf("\nQueue is Empty\n");
    } else {
        printf("The queue is \n");
        temp = front;
        while (temp) {
            printf("%d\t", temp -> data);
            temp = temp -> next;
        }
    }
    printf("\n\n");
}
