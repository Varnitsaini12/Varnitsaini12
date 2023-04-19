#include <bits/stdc++.h> 
int flipBits(int* arr, int n) 
{
    // WRITE YOUR CODE HERE
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    int c1 =0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            c1++;
        }
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]==1)
            arr[i]=-1; 
        else 
            arr[i]=1;
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    int curr_sum=0;
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        curr_sum +=arr[i];
        
        if(curr_sum<0)
            curr_sum = 0;
        max_sum = max(curr_sum,max_sum);
    }
    return max_sum+c1;
}