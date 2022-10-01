using namespace std;
#include <iostream>

#include <iomanip>

int main()
{
    int i,n,j,n2,k=0,a[10],b[10],c[20];
    cout<<"Enter the size of array1:\n";
    cin >> n;
    cout<<"Enter the elements of array1:\n";
    for ( i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<"The elements of array1 are:\n";
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nEnter the element you want to insert at the end of array:\n";
    cin>>a[i];
    std::cout << "Array1 after insertion at end:\n" << std::endl;
    for ( i = 0; i < (n+1); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nEnter the size of array2:\n";
    cin >> n2;
    cout << "\nEnter the elements of array2:\n";
    for ( i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    std::cout << "\nThe elements of array2 are:\n" << std::endl;
        for ( i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            if(a[i]==c[j])
            {
              break;
            }
        }
        if(j==k)
        {
            c[k] = a[i];
            k++;
        }
    }
    for(i=0;i<n2;i++)
    {
        for(j=0;j<k;j++)
        {
            if(b[i]==c[j])
            {
              break;
            }
        }
        if(j==k)
        {
            c[k] = b[i];
            k++;
        }
    }
    std::cout << "\nThe array after merging array1 and array2:\n" << std::endl;
    for ( i = 0; i < k; i++)
    {
        cout<<c[i]<<" ";
        
    }
  return 0;
}
