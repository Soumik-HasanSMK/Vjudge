#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        cnt++;
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        while (m--)
        {
            char c;
            cin >> c;
            if (c == 'P')
            {
                int a, b;
                cin >> a >> b;
                swap(v[a], v[b]);
            }
            else if (c == 'S')
            {
                int s;
                cin >> s;
                for (int i = 0; i < n; i++)
                {
                    v[i] += s;
                }
            }
            else if (c == 'M')
            {
                int m;
                cin >> m;
                for (int i = 0; i < n; i++)
                {
                    v[i] *= m;
                }
            }
            else if (c == 'D')
            {
                int d;
                cin >> d;
                for (int i = 0; i < n; i++)
                {
                    v[i] /= d;
                }
            }
            else
            {
                reverse(v.begin(), v.end());
            }
        }
        cout << "Case " << cnt << ":" << endl;
        for (int x : v)
            cout << x << " ";
            cout<<endl;
    }
    return 0;
}