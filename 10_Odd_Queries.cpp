#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <iostream>

void solve()
{
    long long n, q;
    std::cin >> n >> q;

    std::vector<long long> a(n+1,0);
    for (int i = 1; i <= n;i++)
    {
        std::cin >> a[i];
    }

    std::vector<long long> p(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        p[i] = p[i - 1] + a[i];
    }

    long long total_sum = p[n];

    while(q--)
    {
        long long l, r, k;
        std::cin >> l >> r >> k;

        long long range_sum = p[r] - p[l - 1];
        long long count = r - l + 1;
        long long new_sum = total_sum - range_sum + count * k;

        if(new_sum % 2 != 0)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
            
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
