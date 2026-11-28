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

    if( n < 4 || n % 2 != 0)
    {
        std::cout << "-1" << std::endl;
        return;
    }


    long long max = 0;
    
    if(n % 4 == 0)
    {
        max = n / 4;
    }
    else if (n % 4 == 2)
    {
        max = 1 + (n - 6) / 4;
    }
    


    long long min = 0;

    if(n % 6 == 0)
    {
        min = n / 6;
    }
    else if( n % 6 == 2)
    {
        min = 2 + (n - 8) / 6;
    }
    else if( n % 6 == 4)
    {
        min = 1 + (n - 4) / 6;
    }


    std::cout << min << " " << max << std::endl;
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
