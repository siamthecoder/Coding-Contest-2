#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, l, r, count;
    string s;
    int countArr[100000];

    cin >> s;
    count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        countArr[i + 1] = count;
    }

    cin >> m;
    while (m != 0)
    {
        cin >> l >> r;
        l = l - 1;
        r = r - 1;

        cout << countArr[r] - countArr[l] << endl;

        m--;
    }

    return 0;
}