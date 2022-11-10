#include<iostream>
using namespace std;

int main(){
    char i;
   cin>>i;
//     if(i=='a' || i=='A' || i=='e' || i=='E' ||i=='i' || i=='I'||i=='o' || i=='O' || i=='u' || i=='U')
//     {
//         cout<<"Vowel"<<endl;
//     }
//     else if(i<'a' && i<'A'){
//         cout<<"Not a alphabet"<<endl;
//     }
//     else 
//       cout<<"Consonant"<<endl;

        if(isalpha(i)==0){
                cout<<"Not a alphabet"<<endl;
        }
        else if(i=='a' || i=='A' || i=='e' || i=='E' ||i=='i' || i=='I'||i=='o' || i=='O' || i=='u' || i=='U')
        {
            cout<<"Vowel"<<endl;
        }
        else 
            cout<<"Consonant"<<endl;

 }

