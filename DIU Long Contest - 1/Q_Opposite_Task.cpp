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
        int n;
        cin >> n;
        if (n > 10)
            cout << n - 10 << " " << 10 << endl;
        else
            cout << 0 << " " << n << endl;
    }
    return 0;
}