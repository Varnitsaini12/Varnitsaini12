#include <bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int>ans;
	for(int i =0; i<n; i++){
		int element = arr1[i];

		for(int j = 0; j<m; j++){
			if(element == arr2[j]){
				ans.push_back(element);
				arr2[j] = INT_MIN;
				break;
			}
		}
	}
	return ans;
}

int main() {
    vector<int> ans;
    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    vector<int> arr2= {2,2,3,3};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    ans = findArrayIntersection(arr1, n, arr2, m);
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}