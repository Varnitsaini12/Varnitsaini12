#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int sizes[n];
        for (int i = 0; i < n; i++)
            cin >> sizes[i];

        string res;
        cin >> res;

        int min = 100;
        for (int i = 0; i < n; i++)
        {
            if (res[i] == '0' && sizes[i] < min)
                min = sizes[i];
        }

        cout << min << endl;
    }

    return 0;
}