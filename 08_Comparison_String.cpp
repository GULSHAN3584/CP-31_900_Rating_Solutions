#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>

// fixed some out of bound bugs using google.

void solve()
{
    long long n;
    std::cin >> n;

    std::string s;
    std::cin >> s;
    long long k = n + 1;
    std::set<long long> arr;

    arr.insert(n + 1);

    for (int i = 0; i < s.size(); i++)
    {
        if( s[i] == '>')
        {
           if(i > 0 && s[i - 1] == '>')
           {
               k++;
               
           }
           else
           {
               k = n + 2;
           }
        }
        else 
        {
            if (i > 0 && s[i - 1] == '<')
            {
                k++;
                
            }
            else
            {
                k = n + 2;
                
            }
        }
        arr.insert(k);
    }
    std::cout << arr.size() << std::endl;
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
