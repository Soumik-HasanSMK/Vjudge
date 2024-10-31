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
        ll B, P, M;
        cin >> B >> P >> M;
        ll result = 1;
        B = B % M;
        while (P > 0)
        {
            if (P % 2 == 1)
                result = (result * B) % M;

            P = P >> 1;
            B = (B * B) % M;
        }
        cout << result << endl;
    }
    return 0;
}