#include<stdio.h>

int a[100],b[100],n,n2,c[100],n3;

void main()
{
    int i;
    void create();
    void create2();
    void traverse();
    void traverse2();
    void insert_end();
    void insert_beg();
    void insert_any();
    void deletion_end();
    void deletion_any();
    void deletion_beg();
    void merging();
    void reverse();
    void linear_searching();
    void binary_search();
    void quick_sorting();
    int partition();
    // void swap();

    create();
    create2();
    printf("Traverse:\n");
    traverse();
    traverse2();
    printf("\n");
    merging();
    printf("\nThe reverse of array is:\n");
    reverse();
    quick_sorting(a,0,n);
    printf("\nThe sorted array is:\n");
    for ( i = 1; i <=n; i++)
    {
        printf("%d ",a[i]);
    }
    linear_searching();
    printf("\nSearching element by binary search:-\n");
    binary_search();
    printf("\nInserting at the end of array:\n");
    insert_end();
    traverse();
    printf("Inserting at the beginning of array:\n");
    insert_beg();
    traverse();
    printf("Inserting at the any position of array:\n");
    insert_any();
    traverse();
    printf("Delete the element at the end:\n");
    deletion_end();
    traverse();
    printf("Delete the element at the beginning of array:\n");
    deletion_beg();
    traverse();
    printf("Delete the element of a array from any position:\n");
    deletion_any();
    traverse(); 
    
}

void create()
{
    int i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void create2()
{
    int i;
    printf("Enter the size of the array2: ");
    scanf("%d",&n2);
    printf("Enter the elements of array2: ");
    for(i=1;i<=n2;i++)
    {
        scanf("%d",&b[i]);
    }
}

void traverse()
{
    int j;
    for(j=1;j<=n;j++)
    {
        printf("%d ", a[j]);
    }
    printf("\n");
}

void traverse2()
{
    int j;
    for(j=1;j<=n2;j++)
    {
        printf("%d ", b[j]);
    }
    printf("\n");
}


void insert_end()
{
    n = n+1;
    int insert = 5;
    a[n] = insert;
}

void insert_beg()
{
    int k;
    n = n + 1;
    for(k=n;k>=1;k--)
    {
        a[k] = a[k-1];
    }
    a[1] = 6;     
}
void insert_any()
{
    int pos,ins,l;
    n = n+1;
    pos = 3;
    ins = 7;
    for(l=n;l>=pos+1;l--)
    {
        a[l] = a[l-1];
    }
    a[pos] = ins;
}

void deletion_end()
{
    a[n] = NULL;
    n = n-1;
}

void deletion_beg()
{
    int m;
    for(m=1;m<=n;m++)
    {
        a[m-1] = a[m];
    }
    a[n] = NULL;
    n = n-1;
}

void deletion_any()
{
    int p;
    int pos = 3;
    for(p=pos;p<=n;p++)
    {
        a[p] = a[p+1];
    }
    n = n-1;
}

void merging()
{
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        c[i] = a[i];
    }
    k=i;
    for(i=1;i<=n2;i++)
    {
        c[k] = b[i];
        k++;
    }
    for(i=1;i<k;i++)
    {
        printf("%d ",c[i]);
    }
}

void reverse()
{
    int i;
    for(i=n;i>0;i--)
    {
        printf("%d ",a[i]);
    }
}

void linear_searching()
{
    int flag=0,data,i;
    printf("\nEnter the data to be searched:\n ");
    scanf("%d",&data);
    for(i=1;i<=n;i++)
    {
        if(data == a[i])
          flag = 1;
    }
    if(flag != 0)
      printf("Data found");
    else
      printf("Data not found");
}

void binary_search()
{
    int d,i,mid,lb=0,ub=n;
    mid = ((lb+ub)/2);
    printf("Enter the data to be searched by binary search:\n");
    scanf("%d",&d);
    while (lb<ub)
    {
        if(d == a[mid])
        {
            printf("Data found\n");
            break;
        }
        else if(d < a[mid])
        {
            ub = mid -1;
        }
        else
          lb = mid + 1;
        mid = ((lb+ub/2));
    }
    
}

// void swap(int a,int b)
// {
//     int temp;
//     temp =a;
//     a = b;
//     b = temp;
// }

// int partition()
// {
//     int lb = 0 ,ub = n, pivot,start,end,temp,temp1;
//     pivot = a[lb];
//     start = lb;
//     end = ub;
//     while(start<end)
//     {
//         while(a[start]<=pivot)
//         {
//             start++;
//         }
//         while(a[end]>pivot)
//         {
//             end--;
//         }
//         if(start<end)
//         {
//             temp = a[start];
//             a[start] = a[end];
//             a[end] = temp;
//         }
//     }
//     temp1 = a[lb];
//     a[lb] = a[end];
//     a[end] = temp1;
//     return end;
// }

void quick_sorting(int a[],int lb, int ub)
{
    int i,j,pivot,temp;
    if(lb<ub){
      pivot=lb;
      i=lb;
      j=ub;
      while(i<j){
         while(a[i]<=a[pivot]&&i<ub)
         i++;
         while(a[j]>a[pivot])
         j--;
         if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
      temp=a[pivot];
      a[pivot]=a[j];
      a[j]=temp;
      quick_sorting(a,lb,j-1);
      quick_sorting(a,j+1,ub);
   }
}

// void radix_sort()
// {
//     int i 
// }




