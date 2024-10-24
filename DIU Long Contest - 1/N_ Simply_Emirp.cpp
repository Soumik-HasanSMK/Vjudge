#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
const int MAX = 1000000;
vector<bool> isPrime(MAX + 1, true);

void sieve()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= MAX; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int reverseNumber(int n)
{
    int reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main()
{
    sieve();

    int n;
    while (cin >> n)
    {
        int reverse_n = reverseNumber(n);

        if (!isPrime[n])
            cout << n << " is not prime." << endl;
        else if (reverse_n != n && isPrime[reverse_n])
            cout << n << " is emirp." << endl;
        else
            cout << n << " is prime." << endl;
    }

    return 0;
}
