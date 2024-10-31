#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            break;
        int cnt = 0;
        for (int i = a; i <= b; i++)
        {
            if (i == 0)
                continue;
            else if (sqrt(i) == int(sqrt(i)))
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}