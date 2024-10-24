#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double

bool func(int num, int cnt)
{
    for (int a = 2; a * a <= num; a++)
    {
        if (num % a == 0)
        {
            if (a % 2 == 0 && (num / a) % 2 != 0)
            {
                cout << "Case " << cnt << ": " << num / a << " " << a << endl;
                return true;
            }
            else if (a % 2 != 0 && (num / a) % 2 == 0)
            {
                cout << "Case " << cnt << ": " << a << " " << num / a << endl;
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        cnt++;
        int n;
        cin >> n;

        if (n % 2 != 0 || n == 0)
        {
            cout << "Case " << cnt << ": Impossible" << endl;
        }
        else
        {
            bool found = func(n, cnt);
            if (!found)
            {
                cout << "Case " << cnt << ": Impossible" << endl;
            }
        }
    }
    return 0;
}
