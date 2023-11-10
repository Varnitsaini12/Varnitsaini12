#include<bits/stdc++.h>
using namespace std;

int LCS(string& x, string& y, int m, int n){
    int t[m + 1][n + 1];
    int mx = 0;
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
                mx = max(mx, t[i][j]);
            }
            else{
                t[i][j] = 0;
            }
        }
    }
    return mx;
}

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    string x, y;
    cin >> x >> y;
    cout << LCS(x, y, n, m);
}