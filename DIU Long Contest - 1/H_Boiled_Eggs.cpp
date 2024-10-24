#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
int main()
{
    int t;
    cin >> t;
    int l=0;
    while (t--)
    {
        l++;
        int n, p, q;
        cin >> n >> p >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int mn = min(n, p);
        int sum = 0;
        int i;
        for (i = 0; i < mn; i++)
        {
            sum += v[i];
            if (sum > q)
                break;
        }
        cout<<"Case "<<l<<": "<<i<<endl;
    }
    return 0;
}