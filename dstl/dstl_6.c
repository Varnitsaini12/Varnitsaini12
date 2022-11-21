//WAP in C to display the boolean truth table for AND,OR,NOT

#include<stdio.h>
#include<stdlib.h>

int find_OR(int x, int y){
    if(x==1 && y ==1)
    return 1;
    if(x==0 && y==1)
    return 1;
    if(x==1 && y ==0)
    return 1;
    if(x==0 && y==0)
    return 0;
}

int find_AND(int x, int y ){
    if(x==1 && y==1){
        return 1;
    }
    if(x==0 && y==1 || x==1 && y==0)
    return 0;
    if(x==0 && y==0)
    return 0;
}

int find_NOT(int x){
    if(x==1)
    return 0;
    if(x==0)
    return 1;
}

int main(){
    int a;
    int b;
    char o;
    printf("Enter the first character of operation: ");
    scanf("%c",&o);
    scanf("%d",&a);
    scanf("%d",&b);
    switch(o){
        case 'O':
        printf("a OR b is: %d",find_OR(a,b));
        break;
        case 'A':
        printf("a AND b is: %d",find_AND(a,b));
        break;
        case 'N':
        printf("NOT a: %d",find_NOT(a));
        break;
        default:
        printf("Invalid Choice, Exit!");
        exit(0);
    }

    return 0;   
}