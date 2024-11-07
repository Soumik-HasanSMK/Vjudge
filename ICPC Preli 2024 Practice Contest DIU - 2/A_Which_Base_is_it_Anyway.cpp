#include <bits/stdc++.h>
using namespace std;

/*######################## constants ##########################*/
typedef long long int lli;
const int inf = INT_MAX;
const lli linf = LLONG_MAX;

/* ############ stl containers ##############*/
typedef vector<lli> llv;
typedef pair<int, int> pii;
typedef map<int, int> mp;
typedef set<int> st;
typedef vector<int> iv;

/*################# macros #################*/
#define shihab                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define loop(p, n) for (auto i = p; i < n; i++)
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl '\n'
#define bgen(a) (a).begin(), (a).end()
#define f first
#define s second
#define pb push_back
#define printv(v)    \
    for (auto a : v) \
        cout << a << " ";
#define printmp(m)   \
    for (auto a : m) \
        cout << a.f << " " << a.s << endl;

int st_i(string d)
{
    int num = 0;
    for (int i = 0; i < d.size(); ++i)
    {
        if (d[i] >= 48 && d[i] <= 57)
        {
            num = num * 10 + (d[i] - 48);
        }
        else
        {
            break;
        }
    }
    return num;
}
int oct_d(string d)
{
    int num = st_i(d);
    int sum = 0, cnt = 0;
    while (num != 0)
    {
        int r = num % 10;
        sum += r * pow(8, cnt);
        cnt++;
        num /= 10;
    }
    return sum;
}
int hex_d(string d)
{
    int num = st_i(d);
    int sum = 0, cnt = 0;
    while (num != 0)
    {
        int r = num % 10;
        sum += r * pow(16, cnt);
        cnt++;
        num /= 10;
    }
    return sum;
}

int main()
{
    shihab int t;
    cin >> t;
    while (t--)
    {
        int n;
        string x;
        cin >> n >> x;
        // cout<<st_i(x)<<endl;
        bool isoct = true;
        for (int i = 0; i < x.size(); ++i)
        {
            if (x[i] >= '8')
            {
                isoct = false;
            }
        }
        iv v;
        if (isoct)
        {
            v.pb(oct_d(x));
        }
        else
        {
            v.pb(0);
        }
        v.pb(st_i(x));
        v.pb(hex_d(x));
        cout << n << " ";
        for (int i = 0; i < v.size(); ++i)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}