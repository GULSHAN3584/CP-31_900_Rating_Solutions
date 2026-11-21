#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>

// had to look up for the formulas, Since i didn't know them.

void solve()
{
    long long n, k, x;
    std::cin >> n >> k >> x;

    std::vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    long long smallestsum = 0;
    long long largestsum = 0;

    smallestsum = k*(k + 1) / 2;
    largestsum = n * (n + 1) / 2 - (n - k)*(n - k + 1) / 2;
    
    if( x <= largestsum && x >= smallestsum)
    {
        std::cout << "YES" << std::endl;
        return;
    }

    else
    {
        std::cout << "NO" << std::endl;
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
