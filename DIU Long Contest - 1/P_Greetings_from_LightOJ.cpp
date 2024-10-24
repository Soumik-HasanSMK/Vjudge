#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
int main()
{
    int t;
    cin>>t;
    int cnt=0;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cnt++;
        cout<<"Case "<<cnt<<": "<<a+b<<endl;
    }
    return 0;
}