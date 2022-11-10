#include<iostream>
using namespace std;

#define Size 6

int Top = -1 , arr[Size];

void push();
void pop();
void show();

int main(){
    int choice;
    while(1){
        cout<<"\nOperations on Stack"<<endl;
        cout<<"\n1.Push\n2.Pop\n3.Show\n4.Exit"<<endl;
        cout<<"Enter the choice: ";
        cin>>choice;
        cout<<endl;

        switch (choice)
        {
        case 1: push();
            break;
        case 2: pop();
            break;
        case 3: show();
            break;
        case 4: exit(0);   
        default: cout<<"\nInvalid Choice!"<<endl;    
        }
    }
}

void push(){
    int x;
    if(Top== Size-1){
        cout<<"\nOverflow!!"<<endl;
    }
    else{
        cout<<"\nEnter the element to be pushed in to stack: "<<endl;
        cin>>x;
        Top++;
        arr[Top] = x;
    }
}

void pop(){
    if(Top == -1)
    {
        cout<<"\nUnderflow"<<endl;
    }
    else{
        cout<<"\nPopped element: "<<arr[Top]<<endl;
        Top = Top - 1;
    }
}

void show(){
    if(Top == -1){
        cout<<"\nUnderflow!!"<<endl;
    }
    else{
        cout<<"\nThe Elements of Stack are: "<<endl;
        for(int i = Top; i>=0; --i){
            cout<<arr[i]<<endl;
        }
    }

}