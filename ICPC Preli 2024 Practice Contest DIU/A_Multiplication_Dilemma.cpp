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
        ll a, b;
        cin >> a >> b;

        ll x = 10 * ((a / 10) + 1);
        ll y = 10 * ((b / 10) + 1);
        int r1 = x - a;
        int r2 = y - b;

        if (a % 10 != 0 && a >= 10 && b >= 10 && b % 10 == 0)
        {

            cout << x << " x " << b << " - " << b << " x " << r1 << endl;
        }
        else if (b % 10 != 0 && a >= 10 && b >= 10 && a % 10 == 0)
        {
            cout << a << " x " << y << " - " << a << " x " << r2 << endl;
        }
        else if (a < 10 && b < 10)
            cout << a << " x " << b << endl;

        else if (a < 10 && b > 10 && b % 10 != 0)
            cout << a << " x " << y << " - " << a << " x " << r2 << endl;
        else if (a > 10 && b < 10 && a % 10 != 0)
            cout << b << " x " << x << " - " << b << " x " << r1 << endl;
        else
            cout << a << " x " << b << endl;
    }
    return 0;
}