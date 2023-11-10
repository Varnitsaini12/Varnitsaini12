#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int>& arr, int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) 
    {
        L[i] = arr[p + i]; 
    }
    for (int j = 0; j < n2; j++) 
    {
        R[j] = arr[q + j + 1]; 
    }

    int i = 0;
    int j = 0;

    for (int k = p; k <= r; k++)
    {
        if (i < n1 && (j >= n2 || L[i] <= R[j]))
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
    }
}

void mergeSort(vector<int>& arr, int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergeSort(arr, p, q);
        mergeSort(arr, q + 1, r);
        Merge(arr, p, q, r);
    }
}

int main()
{
    int n;
    cin >> n;
    int a;
    vector<int> arr(n);
    cout << "Enter elements in the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr[i] = a; 
    }

    mergeSort(arr, 0, n - 1); 

    cout << "Array after sorting by Merge sort:\n";
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}
