#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
int main()
{
    int n;
    cin >> n;
    bool ans = false;
    vector<int> v = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190, 210, 231, 253, 276, 300, 325, 351, 378, 406, 435, 465, 496};
    for (int x : v)
    {
        if (x == n)
        {
            ans = true;
            break;
        }
    }
    cout << ((ans) ? "YES" : "NO") << endl;
    return 0;
}