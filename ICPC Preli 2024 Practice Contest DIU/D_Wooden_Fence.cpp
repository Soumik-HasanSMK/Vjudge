#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, b, w;
        cin >> n >> b >> w;
        ll mn = min(b, w);
        if (mn == b)
        {
            if (mn * 2 >= n)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if (mn * 2 + 1 >= n)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}