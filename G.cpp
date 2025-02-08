#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;

    cin >> T;

    while (T != 0)
    {
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int maxOne = arr[0];
        for (int i = 0; i < N; i++)
        {
            if (maxOne < arr[i])
            {
                maxOne = arr[i];
            }
        }
        sort(arr, arr + N);
        int maxTwo;

        for (int i = N - 2; i >= 0; i--)
        {
            if (maxOne != arr[i])
            {
                maxTwo = arr[i];
                break;
            }
        }

        cout << maxOne + maxTwo << endl;

        T--;
    }

    return 0;
}