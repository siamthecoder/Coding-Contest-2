#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q, i, j, sum;

    cin >> N;

    int arr[N];

    for (int k = 0; k < N; k++)
    {
        cin >> arr[k];
    }

    cin >> Q;
    while (Q != 0)
    {
        cin >> i >> j;
        sum = 0;
        if (i == j)
        {
            cout << arr[i];
        }
        else
        {
            for (int a = i; a <= j; a++)
            {
                sum = sum + arr[a];
            }
            cout << sum << endl;
        }
        Q--;
    }

    return 0;
}