#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
#define PI 3.14159265358979323846
int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        cnt++;
        db r;
        cin >> r;
        db ans = (2 * r) * (2 * r) - PI * r * r;
        cout << "Case " << cnt << ": " << fixed << setprecision(2) << ans << endl;
    }
    return 0;
}