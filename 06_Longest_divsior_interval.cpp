#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include<iostream>

// I couldn't solve this, I had to took help from the google.

void solve()
{
    long long n;
    std::cin >> n;

    int i = 1;
    while(n % i == 0)
    {
        if(n % i != 0)
        {
            break;
        }
        else
        {
            i++;
        }
    }
    std::cout << i - 1 << std::endl;
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
