#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
int main()
{
    int n;
    cin>>n;
    vector<int> v1(n), v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i] >> v2[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if (i != j && v1[i] == v2[j])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
