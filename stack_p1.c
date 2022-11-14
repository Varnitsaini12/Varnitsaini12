#include<stdio.h>
#include<stdlib.h>


#define Size 50
int Top = -1,arr[Size];
void Push();
void Pop();
void Show();


int main(){
    int choice;
    while(1){
        printf("\nOperations on Stack:\n");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.Exit\n");
        printf("\nEnter the choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:Push();
            break;
        case 2:Pop();
            break;
        case 3:Show();
            break;
        case 4:exit(0);
        default: printf("\nInvalid Choice!");
        }
    }
    return 0;
}

void Push(){
    int x;
    char ch;
    if(Top==Size-1)
    {
        printf("\nOverflow!!\n");
    }
    else
    {
        printf("\nEnter Element to be inserted in to the stack: ");
        scanf("%d",&x);
        Top++;
        arr[Top] = x;
    }
}

void Pop(){
    if(Top == -1){
        printf("\nUnderflow!!\n");
    }
    else{
        printf("\nPopped element: %d\n",arr[Top]);
        Top = Top-1;
    }
}

void Show(){
    if(Top == -1){
        printf("\nUnderflow!!\n");
    }
    else{
        printf("\nElements of stack are:\n");
        for(int i = Top; i>=0; --i){
            printf("%d\n",arr[i]);
        }
    }
}