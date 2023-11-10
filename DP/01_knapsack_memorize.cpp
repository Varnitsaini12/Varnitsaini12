// DP memorize Approach to 0/1 knapsack problem

#include<bits/stdc++.h>
using namespace std;

int t[102][1002];

int knapSack(int W, int wt[], int val[], int n){
    if(n == 0 || W == 0)
        return 0;
    if(t[n][W] != -1){
        return t[n][W];
    }
    if(wt[n-1]>W){
        return t[n][W] = knapSack(W, wt, val, n - 1);
    }
    else{
        return t[n][W] = max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1), knapSack(W, wt, val, n - 1));
    }
}

int main() 
{ 
    memset(t, -1, sizeof(t));
    int profit[] = { 60, 100, 120 }; 
    int weight[] = { 10, 20, 30 }; 
    int W = 50; 
    int n = sizeof(profit) / sizeof(profit[0]); 
    cout << knapSack(W, weight, profit, n); 
    return 0; 
} 