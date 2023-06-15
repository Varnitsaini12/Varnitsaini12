#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
    char input[1000];
    cin.getline(input,1000);

    char *token = strtok(input," ");
    cout<<token <<endl;
    while(token!=NULL){
        token = strtok(NULL," ");
        cout<<token<<endl;
    }
    // cout<<strtok(NULL," ")<<endl;  // internally maintain the state of the string you passed in the last fn call
    
   return 0;
}