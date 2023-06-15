#include <bits/stdc++.h>

using namespace std;

int findMinDiff(vector<int> callDurations, int X) {
  vector<int> newCallDurations;
  int minDiff = INT_MAX;
  
  for (int i = 0; i < (1 << X); i++) {    
    for (int j = 0; j < callDurations.size(); j++) {
      if (!((1 << j) & i)) {
        newCallDurations.push_back(callDurations[j]);
      }
    }
    
  }
    
    int n = newCallDurations.size();
    int mid = n / 2;
    
    vector<int> subList1(newCallDurations.begin(), newCallDurations.begin() + mid);
    vector<int> subList2(newCallDurations.begin() + mid, newCallDurations.end());

    int sum1 = accumulate(subList1.begin(), subList1.end(), 0);
    int sum2 = accumulate(subList2.begin(), subList2.end(), 0);

    int diff = (sum1 - sum2);

    minDiff = min(minDiff, diff);
  

  return minDiff;
}


int main() {

  
  int n;
  cin >> n;
  vector<int> callDurations(n);
  for (int i = 0; i < n; i++) {
    cin >> callDurations[i];
  }

  int X = n/3;
  
  int minDiff = findMinDiff(callDurations, X);
  cout << minDiff << endl;

  return 0;
}
