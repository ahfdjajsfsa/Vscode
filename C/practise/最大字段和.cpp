// 题目描述

// 给定一个长度为 n 的数组 a，请你从数组 a 中找到连续的一段数，使得这段数的和最大。

// 其中，1 ≤ n ≤ 10000，-60000 ≤ ai ≤ 60000。

// 输入描述

// 第一行是一个正整数 n，表示数组 a 的长度。

// 从第二行开始是 n 个数据，代表 ai。

// 输出描述

// 输出一行，表示子段的最大和。

// 样例输入

// 5
// 1 -3 4 1 -9

// 样例输出

// 5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[70000], s[70000];
    s[0] = 0;
    int ans = s[1];
    int mins = s[1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
        mins = min(mins, s[i]);
        ans = max(ans, s[i] - mins);
    }
    cout << ans;
}
