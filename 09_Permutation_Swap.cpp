#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>
#include<numeric>

void solve()
{
    long long n;
    std::cin >> n;
    long long k = 0;

    std::vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::vector<long long> arr1(n);
    std::iota(arr1.begin(), arr1.end(), 1);

    std::vector<long long> arr2;

    long long i = 0;

    while( i < n)
    {
        arr2.push_back(std::abs(arr[i] - arr1[i]));
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        if(arr2[i] != 0)
        {
            k = std::gcd(k, arr2[i]);
        }
    }
    std::cout << k << std::endl;
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
