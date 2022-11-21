//Cartesian product of two set
#include <stdio.h>

int main()
{
    int a[5],b[5],i,j,n1,n2;
    printf("enter the size of first set:");
    scanf("%d",&n1);
    printf("enter the size of second set:");
    scanf("%d",&n2);
    printf("enter the elements of first set");
    for(i=0;i<n1;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter the elements of second set");
    for(j=0;j<n2;j++)
    {
    scanf("%d",&b[j]);
    }
    // logic to find the cartesian product of two sets 
    printf("{");
    for(i=0;i<n1;i++)
    {
     for(j=0;j<n2;j++)
     {
    printf("(%d,%d),",a[i],b[j]);
     }
    }
    printf("}");
    return 0; 
}
