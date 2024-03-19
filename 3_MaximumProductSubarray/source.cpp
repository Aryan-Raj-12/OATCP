#include <bits/stdc++.h>
using namespace std;

int MOD = int(1e9+7);
int maxProduct(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    int maxi = INT_MIN, x = 0, product = 1;

    for (int i = 0; i < n; i++)
    {
        product *= nums[i];
        maxi = max(maxi, product);

        if (product == 0)
        {
            product = 1;
            x = 0;
        }
        else if (product < 0)
        {
            if (x == 0)
                x = product;
            else
                maxi = max(maxi, product / x);
        }
    }

    return maxi;
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
    int ans = maxProduct(nums);
    cout << ans % MOD << endl;
}
