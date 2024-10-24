#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int a = 2; a * a <= num; a++)
    {
        if (num % a == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    while (cin >> n)
    {
        string s = to_string(n);
        reverse(s.begin(), s.end());
        int m = stoi(s);
        if (isPrime(n))
        {
            if (isPrime(m))
                cout << n << " is emirp." << endl;
            else
                cout << n << " is prime." << endl;
        }
        else
            cout << n << " is not prime." << endl;
    }
    return 0;
}