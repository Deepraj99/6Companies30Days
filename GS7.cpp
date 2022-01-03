#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, pos;
    cin >> n >> m >> k;

    if(m % n == 0)
    {
        if(k == 1)
            cout << n << endl;
        else
            cout << k-1 << endl;
    }
    else
    {
        m %= n;
        if(n-k+1 >= m)
            cout << k + m - 1 << endl;
        else
            cout << m - (n - k + 1) << endl;
    }
} 
