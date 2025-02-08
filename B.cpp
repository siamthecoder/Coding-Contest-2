#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, u, q, k, r1, c1, r2, c2, R1, C1, R2, C2;

    cin >> n >> m >> u >> q;
    int binArr[n][m];
    for (int k = 0; k < n; k++)
    { // input the array elements
        for (int l = 0; l < n; l++)
        {
            cin >> binArr[k][l];
        }
    }

    for (int i = 0; i < u; i++)
    {
        cin >> k >> r1 >> c1 >> r2 >> c2;

        for (int s = r1; s <= r2; s++)
        { // adding k
            for (int t = c1; t <= c2; t++)
            {
                binArr[s][t] = binArr[s][t] + k;
            }
        }
    }

    for (int p = 0; p < q; p++)
    {
        cin >> R1 >> C1 >> R2 >> C2;
        int sum = 0;

        for (int a = R1; a <= R2; a++)
        { // adding k
            for (int b = C1; b <= C2; b++)
            {
                sum = sum + binArr[a][b];
            }
        }
        cout << sum << endl;
    }

    return 0;
}