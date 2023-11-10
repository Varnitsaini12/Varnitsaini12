#include<bits/stdc++.h>
using namespace std;

int CountSubsetsWithSum(int arr[], int n, int sum){
    int t[n + 1][sum + 1];
    for (int i = 0; i < n + 1; i++){
        for (int j = 0; j < sum + 1; j++){
            if(i == 0){
                t[i][j] = false;
            }
            if(j == 0){
                t[i][j] = true;
            }
        }
    }
    for (int i = 1; i < n + 1; i++){
        for (int j = 1; j < sum + 1; j++){
            if(arr[i - 1] <= j) {
                t[i][j] = t[i - 1][j - arr[i - 1]] + t[i - 1][j];
            }
            else{
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][sum];
}

int CountSubsetsWithDiff(int arr[], int n, int diff) {
	int sumOfArray = 0;
	for (int i = 0; i < n; i++)
		sumOfArray += arr[i]; // taking sum of the array 

	if ((sumOfArray + diff) % 2 != 0)
		return 0;
	else
		return CountSubsetsWithSum(arr, n, (sumOfArray + diff) / 2);// we will get the number of array(subset) with particular sum 
}

int main() {
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
    int diff;
    cin >> diff;
    cout<< CountSubsetsWithDiff(arr, n, diff);
    
    return 0; 
}