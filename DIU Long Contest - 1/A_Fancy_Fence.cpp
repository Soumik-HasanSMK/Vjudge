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
        int a;
        cin >> a;
        (360 % (180 - a) == 0) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}