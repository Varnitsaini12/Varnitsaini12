#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    // vector<int> v;
    int p1 = 0, p2 = 0;
    int ml = 0;
    int m_l_p = 1;
    while (n--)
    {
        int s1, s2;
        cin >> s1 >> s2;
        p1 += s1;
        p2 += s2;
        int l = 0;
        int c_l_p = 1;
        if (p1 > p2)
        {
            l = p1 - p2;
        }
        else
        {
            l = p2 - p1;
            c_l_p = 2;
        }
        if (l > ml)
        {
            ml = l;
            m_l_p = c_l_p;
        }
    }
    cout<<m_l_p<<" "<<ml<<endl;

    return 0;
}
