#include<stdio.h>
#include<stdlib.h>

#define max 100

int c_queue[max];

void enqueue();
void dequeue();
void show();
int front = -1, rear = -1;


int main(){
    int choice;
    while(1){
        printf("Operations on the queue\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Show\n");
        printf("4.Exit\n");
        int ch;
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: 
                enqueue();
                break;

            case 2: 
                dequeue();
                break;

            case 3: 
                show();
                break;

            case 4: 
                exit(0);
                break;

            default: 
                printf("Invalid choice\n");
                break;

        }
    }

    return 0;

}

void enqueue(){
    int x;
    printf("Enter Data to enqueue\n");
    scanf("%d",&x);
    if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
        c_queue[rear] = x;
    }
    else if((rear +1)%max==front){
        printf("Overflow\n");
        exit(0);
    }
    else
    {
        rear = (rear +1)%max;
        c_queue[rear] = x;
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("Underflow\n");
        exit(0);
    }
    else if(front == rear){
        front = -1;
        rear = -1;
    }
    else{
        front = (front+1)%max;
    }

}

void show(){
 int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty!");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=rear)  
        {  
            printf("%d,", c_queue[i]);  
            i=(i+1)%max;  
        } 
        printf("\n"); 
    }  
}  

