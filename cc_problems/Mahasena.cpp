#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    vector<int> v;
    int a[n];
    int count_even = 0;
    int count_odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
        if (v[i] % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }
    if (count_even > count_odd)
    {
        cout << "READY FOR BATTLE" << endl;
    }
    else
        cout << "NOT READY" << endl;
    return 0;
}
