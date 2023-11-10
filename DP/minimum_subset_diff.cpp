#include<bits/stdc++.h>
using namespace std;

vector<int> isSubsetPossible(int arr[], int n, int sum){
    int t[n + 1][sum + 1];
    for (int i = 0; i < n + 1; i++){
        for (int j = 0; j < sum + 1; j++){
            if(i==0){
                t[i][j] = false;
            }
            if(j==0){
                t[i][j] = true;
            }
        }
    }
    for (int i = 1; i < n + 1; i++){
        for (int j = 1; j < sum + 1; j++){
            if (arr[i - 1] <= j)
				t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j]; // include or exclude
			else
				t[i][j] = t[i - 1][j]; // exclude
        }
    }
    vector<int> v;
    for (int j = 0; j < sum + 1; j++){
        if(t[n][j]== true){
            v.push_back(j);
        }
    }
    return v;
}

int MinSubsetSumDiff(int arr[], int n){
    int range = 0;
    for (int i = 0; i < n; i++){
        range += arr[i];
    }
    vector<int>v = isSubsetPossible(arr, n, range);
    int mn = INT_MAX;
    for (int i = 0; i < v.size()/2; i++){
        mn = min(mn, range - 2 * v[i]);
    }
    return mn;
}

int main() {
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << MinSubsetSumDiff(arr, n) << endl;
	return 0;
}