#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPowerOfTwo(ll n)
{
    return (n > 0 && (n & (n - 1)) == 0);
}

int main()
{
    int t;
    cin >> t;
    int cnt = 0;

    while (t--)
    {
        cnt++;
        ll W;
        cin >> W;
        if (W % 2 != 0 || isPowerOfTwo(W))
        {
            cout << "Case " << cnt << ": Impossible" << endl;
        }
        else
        {
            ll M = 1;
            ll N = W;
            while (N % 2 == 0)
            {
                M *= 2;
                N /= 2;
            }
            cout << "Case " << cnt << ": " << N << " " << M << endl;
        }
    }
    return 0;
}
