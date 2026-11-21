#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>

void solve()
{
    long long a, b, n;
    std::cin >> a >> b >> n;
    std::vector<long long> arr(n);

    long long ans = 0;
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
        ans += std::min(arr[i], a - 1);

    }
        ans += b;
        
    std::cout << ans << std::endl;
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
