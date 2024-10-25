#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
int main()
{
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; caseNum++)
    {
        long long n, m;
        cin >> n >> m;

        long long total_sum = (n / 2) * m;
        cout << "Case " << caseNum << ": " << total_sum << endl;
    }
    return 0;
}