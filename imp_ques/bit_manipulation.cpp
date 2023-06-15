#include <iostream>
using namespace std;

int getIthBit(int n, int i)
{
    int mask = (1 << i);
    return (n & mask) > 0 ? 1 : 0;
}

int setIthBit(int n, int i)
{
    int mask = (1<<i);
    int new_var = (n|mask);
    return new_var;
}

int clearIthBit(int n, int i)
{
    int mask = ~(1 << i);
    return (n & mask) > 0 ? 1 : 0;
}

void updateIthBit(int &n, int i,int v)
{
    clearIthBit(n,i);
    int mask = (v<<i);
    n = n|mask;    //sets the right value  
}

int clearLastIbits(int &n,int i){
    int mask = (-1<<i);
    n = n&mask;
    return n;
}



int main()
{
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    int i=2;
    cout<<clearLastIbits(n,i)<<endl;
    // cout << "Enter the ith bit on which you want to do a operation: ";
    // cin >> i;
    // int temp = 1;
    // int choice;
    // while(temp){
    //     cout<<"Choose the operation you want to perform: ";
    //     cout<<"\n1.Get Ith bit\n2.Set Ith bit\n3.Clear Ith bit\n4.Update Ith bit\n5.Exit\n";
    //     cin>>choice;
    //     cout<<endl;
    //     if(choice==1){
    //         cout <<getIthBit(n, i) << endl;
    //     }
    //     else if(choice == 2){
    //         cout<<setIthBit(n,i)<<endl;
    //     }
    //     else if(choice == 3){
    //         cout<<clearIthBit(n,i)<<endl;
    //     }
    //     else if(choice == 4){
    //         updateIthBit(n,i,1);
    //         cout<<n<<endl;
    //     }
    //     else{
    //         exit(0);
    //     }
    //     if(choice >=5){
    //         temp = 0;
    //     }
    //     else
    //         temp = 1;
    // }


    return 0;
}