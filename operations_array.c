#include<stdio.h>

int a[20],n;

int main()
{
    void create();
    void traverse();
    create();
    traverse();
    return 0;
}

void create()
{
    int i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

}

void traverse()
{
    int j;
    for(j=1;j<=n;j++)
    {
        printf("%d ",a[j]);
    }
}