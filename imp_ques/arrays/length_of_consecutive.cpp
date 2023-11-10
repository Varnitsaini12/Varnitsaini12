#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1] || (arr[i+1]- arr[i]) > 1)
        {
            continue;
        }
        else if (arr[i] == (arr[i + 1] - 1))
        {
            count++;
            cout << count << " ";
        }
    }
    return count;
}

int main()
{
    vector<int> a = {1, 9, 3, 10, 4, 20, 2};
    cout << "Length of Longest Consecutive Sequence is: " << lengthOfLongestConsecutiveSequence(a, 7) << endl;
}