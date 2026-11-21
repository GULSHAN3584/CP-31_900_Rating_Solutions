#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>

// I was reading one constraint wrong and spent whole day thinking about it. When i finally realized about it i was able to solve this problem quickly.

void solve()
{
    long long n;
    std::cin >> n;
    std::vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    if(n % 2 == 0)
    {
        std::cout << "2" << std::endl;
        std::cout << "1" << " " << n << std::endl;
        std::cout << "1" << " " << n << std::endl;
    }
    else 
    {
        std::cout << "4" << std::endl;
        std::cout << "1" << " " << n - 1 << std::endl;
        std::cout << "1" << " " << n - 1 << std::endl;
        std::cout << n - 1 << " " << n << std::endl;
        std::cout << n - 1 << " " << n << std::endl;
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
