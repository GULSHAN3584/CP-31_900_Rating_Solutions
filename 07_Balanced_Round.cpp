#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <iostream>

void solve()
{
    long long n , k;
    std::cin >> n >> k;
    long long count = 0;
    long long max_count = 0;
    std::vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::sort(arr.begin(), arr.end());

    for (int i = 0; i < n-1; i++)
    {
        if(arr[i + 1] - arr[i] <= k)
        {
            count++;
            
        }
        else
        {
            if(max_count < count)
            {
                max_count = count;
            }

            count = 0;
            continue;
        }
        
    }
    if (max_count < count)
    {
        max_count = count;
    }
    std::cout << n - (max_count + 1) << std::endl;
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
