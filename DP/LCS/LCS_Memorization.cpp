#include<bits/stdc++.h>
using namespace std;

int t[1002][1002];

int LCS(string X, string Y, int n, int m) {
	// base case
	if (n == 0 || m == 0)
		return 0;
    if(t[n][m]!=-1){
        return t[n][m];
    }

  // choice diagram
	// when both string X and Y is having same last char
	if (X[n - 1] == Y[m - 1])
		return t[n][m] = 1 + LCS(X, Y, n - 1, m - 1); // count the number and decreament the both's string length
	// when both string's last character is not same 
	else
		return t[n][m] = max(LCS(X, Y, n - 1, m), LCS(X, Y, n, m - 1)); // one take full and another by leaving last and vice versa

    return t[n][m];
}

int main() {
	string X, Y; cin >> X >> Y;
	int n = X.length(), m = Y.length();

	memset(t, -1, sizeof(t)); // intialize the whole dp matrix with -1; // from memset we can initialise either -1 and zero;

	cout << LCS(X, Y, n, m) << endl;
	return 0;
}