#include <bits/stdc++.h>
using namespace std;
#define ll long long
void print(int arr[], int k)
{
    for (int i = 1; i <= k; i++)
        cout << arr[i];
    cout << " ";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[k + 5];
        for (int i = 1; i <= k; i++)
            arr[i] = i;
        print(arr,k);
        
        while (true)
        {
            int i = k;
            while (i >= 1 && arr[i] == n - k + i)
                i--;
            if (i == 0)
                break;
            else
            {
                arr[i]++;
                for (int j = i + 1; j <= k; j++)
                {
                    arr[j] = arr[j - 1] + 1;
                }
            }
            print(arr,k);
        }
        cout << endl;
    }
    return 0;
}