#include<stdio.h>
#include<stdlib.h>

#define max 100

void insert();
void delete();
void show();

int queue[max];
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
    printf("Enter the data to be inserted:\n");
    scanf("%d",&x);
    if(rear == max-1){
        printf("\nOverflow!");
        exit(0);
    }

    if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = x;   
      
}  

void dequeue(){
    int x;
    if(front == -1 || front>rear){
        printf("\nUnderflow!");
        exit(0);
    }
    else{
        x = queue[front];
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else   
        {  
            front = front + 1;  
        }  
         
    }  
}

void show(){
    int i;  
    if(rear ==-1){
        printf("\nQueue is empty\n");
        
    }
    else{
        for(i=front;i<=rear;i++){
            printf("%d\t",queue[i]);
        }
        printf("\n");
    }
}
    



