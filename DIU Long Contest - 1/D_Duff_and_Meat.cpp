#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
int main()
{
    int t;
    cin >> t;
    int mn = INT_MAX;
    ll sum=0;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (b < mn)
            mn = b;
        sum+=a*mn;
    }
    cout<<sum<<endl;
    return 0;
}