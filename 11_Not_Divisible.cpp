#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <iostream>

void solve()
{
    long long n;
    std::cin >> n;

    std::vector<long long> a(n);
   
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    for (int i = 0; i < n;i++)
    {
        if(a[i] == 1)
        {
            a[i]++;
        }
    }

    for (int i = 0; i < n-1; i++)
    {
        if(a[i+1] % a[i] == 0)
        {
            a[i + 1]++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
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
