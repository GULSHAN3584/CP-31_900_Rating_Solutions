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

    long long count_of_zero = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            count_of_zero++;
        }
    }

    bool found_zero = false;

    long long left = 0;
    long long right = n - 1;

    while(a[left] == 0)
    {
        left++;
    }
    while(a[right] == 0)
    {
        right--;
    }

    for (int i = left; i <= right; i++)
    {
        if(a[i] == 0)
        {
            found_zero = true;
        }
    }

    if(count_of_zero == n)
    {
        std::cout << "0" << std::endl;
        return;
    }
    else if(found_zero == false)
    {
        std::cout << "1" << std::endl;
        return;
    }
    else
    {
        std::cout << "2" << std::endl;
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
