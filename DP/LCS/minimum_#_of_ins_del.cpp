#include<bits/stdc++.h>
using namespace std;

int LCS(string& x, string& y, int m, int n){
    int t[m + 1][n + 1];
    for (int i = 0; i <= m; i++){
        for (int j = 0; j <= n; j++){
            if(i==0 || j ==0){
                t[i][j] = 0;
            }
        }
    }
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if(x[i-1]==y[j-1]){
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else{
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }
    return t[m][n];
}

void numberofInsertionandDeletion(string& x, string& y, int m, int n){
    int z = LCS(x, y, n, m);
    int ins = n - z;
    int del = m - z;
    cout << ins << " " << del;
}

int main(){
    string x, y;
    cin >> x >> y;
    int n = x.length();
    int m = y.length();
    numberofInsertionandDeletion(x, y, n, m);
}