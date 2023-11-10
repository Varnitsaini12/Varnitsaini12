// Longest Palindromic string
// It has only one input string but LCS has 2 so we reverse given string and take it as a second input

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

int main(){
    int n;
    cin >> n;
    int m = n;
    string x;
    cin >> x;
    string temp = x;
    reverse(temp.begin(), temp.end());
    cout << LCS(x,temp, n, m);
}