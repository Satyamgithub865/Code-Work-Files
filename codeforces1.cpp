#include <bits/stdc++.h>
using namespace std;
#define ll long long

void rowGreaterThanColon(ll n, ll m)
{
    ll arr[n][m];
    for (ll i = 0; i < n; i++)
    {
        arr[i][0] = i + 1;
    }
    ll d = m + 1;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 1; j < m; j++)
        {
            arr[i][j] = arr[i][j - 1] + d;
        }
        d += 1;
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void rowLessThanColon(ll n, ll m)
{
    ll arr[n][m];
    for (ll i = 0; i < m; i++)
    {
        arr[0][i] = i + 1;
    }
    ll d = n + 1;
    for (ll j = 0; j < m; j++)
    {
        for (ll i = 1; i < n; i++)
        {
            arr[i][j] = arr[i - 1][j] + d;
        }
        d = d + 1;
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        
        if (n < m)
        {
            rowLessThanColon(n, m);
        }
        else
        {
            rowGreaterThanColon(n, m);
        }
    }
    return 0;
}