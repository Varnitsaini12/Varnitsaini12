using namespace std;
#include <iostream>
#include <malloc.h>

struct node
{
    int info;
    struct node *link;
};
struct node *first;

int main()
{
    int data1;
    int d = 0;
    struct node *x;
    struct node *y;
    cout << "Enter the info of first node:\n";
    cin >> data1;
    x->info = data1;
    first = x;
    while (d<2)
    {
        y = (struct node *)malloc(sizeof(struct node));
        cout << "\nEnter the info of next node:\n";
        cin >> y->info;
        x->link = y;
        x = y;
        // cout << "Press[y/n] for more nodes:\n";
        d++;
    }
    x->link = NULL;
    struct node *ptr;
    ptr = first;
    while (ptr != NULL)
    {
        cout << ptr->info<<" ";
        ptr = ptr->link;
    }
    return 0;
}
