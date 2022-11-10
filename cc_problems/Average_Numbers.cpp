#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        long long v;
        int sum = 0;
        int m=0, m1=0;
        cin>>n>>k>>v;
        int a[n];
        vector<int>vc;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            vc.push_back(a[i]);
            sum=sum + vc[i];
        }
        m= (n + k) * v;
        cout<<m;
        m1 = m - sum;
        if (m1 % k == 0 && m > sum)
            cout << m1/k << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
