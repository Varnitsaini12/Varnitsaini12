#include <iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    // your code goes here
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int md = 0;
        int z = 0;
        vector<int> v;
        int answer = 0;
        map<int, int> m1, g;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
       
        for (int i = 0; i < n; i++)
        {

            if (m1.find(a[i]) == m1.end())
                m1[a[i]] = i;

            else
            {
                
                if (md < i - m1[a[i]])
                {
                    md = i - m1[a[i]];
                    answer = a[i];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == answer)
            {
                v.push_back(i);
            }
        }
        if (v.size() == 0)
        {
            cout << "NO" << endl;
            z = 1;
        }
        else if(v.size()>0)
        {
            int a = 0, b = 0;
            if (v[0] > 0)
            {
                for (int i = 0; i < v[0]; i++)
                {
                    g[a[i]]++;
                    a = 1;
                }
            }
            if (v[v.size() - 1]+1 < n)
            {
                for (int i = v[v.size()-1]+1; i < n; i++)
                {
                    g[a[i]]++;
                    b = 1;
                }
            }
            if (a == 0 && b == 0)
            {
                cout << "YES" << endl;
            }
            else if (g.size() == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}