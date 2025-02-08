#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;

    cin >> n;

    int stripeArr[n], preSumStripe[n] = {}, suffixSumStripe[n] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> stripeArr[i];
    }

    preSumStripe[0] = stripeArr[0];
    suffixSumStripe[n - 1] = stripeArr[n - 1];

    // calculating prefix sum now
    for (int i = 1; i < n; i++)
    {
        preSumStripe[i] = preSumStripe[i - 1] + stripeArr[i];
    }

 
    // calculating suffix sum now
    for (int i = n - 2; i >= 0; i--)
    {
        suffixSumStripe[i] = suffixSumStripe[i + 1] + stripeArr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (preSumStripe[i] == suffixSumStripe[i + 1])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}