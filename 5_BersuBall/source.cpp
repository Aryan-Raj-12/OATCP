#include <bits/stdc++.h>
using namespace std;
int MOD = int(1e9 + 7);

int main()
{
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    int n, m, pairs=0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    int b[m];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (abs(a[i] - b[j]) < 2)
            {
                b[j] = 1000;
                pairs++;
                break;
            }

    cout << pairs % MOD << endl;
    return 0;
}

