#include <bits/stdc++.h>
using namespace std;

int MOD = int(1e9 + 7);

int maxRotateFunction(vector<int> &arr)
{
    if (arr.size() == 0)
        return 0;
    int sum = 0, F0 = 0, ans = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        F0 += i * arr[i];
    }
    int dp[arr.size()];
    dp[0] = F0;
    ans = dp[0];
    for (int i = 1; i < arr.size(); i++)
    {
        dp[i] = dp[i - 1] + sum - arr.size() * arr[arr.size() - i];
        ans = max(ans, dp[i]);
    }
    return ans;
}

int main()
{
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> nums;
    while (n--)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int ans = maxRotateFunction(nums);
    cout << ans % MOD << endl;
}