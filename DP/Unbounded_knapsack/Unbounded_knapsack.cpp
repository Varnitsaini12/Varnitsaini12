// Unbounded knapsack means items in array can repeat many times

#include<bits/stdc++.h>
using namespace std;

int un_knapSack(int wt[], int val[],int n, int sum){
    int t[n + 1][sum + 1];
    for (int i = 0; i < n + 1; i++){
        for (int j = 0; j < sum + 1; j++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }
            else if (wt[i - 1] <= j){
                t[i][j] = max(val[i - 1] + t[i][j - wt[i - 1]], t[i - 1][j]);
            }
            else{
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][sum];
}

int main(){
    int n; cin >> n; // number of items
	int val[n], wt[n]; // values and wts array
	for (int i = 0; i < n; i++)
		cin >> wt[i];
	for (int i = 0; i < n; i++)
		cin >> val[i];
	int W; cin >> W; // capacity
	cout << un_knapSack(wt, val, n, W) << endl;
	return 0;
}