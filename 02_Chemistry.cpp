#include <iostream>
#include <vector>
#include<string>

// for this specific problem i had to learn how to use freq arrays and sets on spot .

void solve()
{
    int n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;

    std::vector<int> freq(26, 0);

    for ( auto ch : s)
    {
        freq[ch - 'a']++;
    }

    int odd_count = 0;
    for (int i = 0; i < 26; i++)
    {
        if(freq[i] > 0)
        {
            if(freq[i] % 2 == 1)
            {
                odd_count++;
            }
            else
            {
                continue;
            }
        }
    }
    if(odd_count - k == 1 || odd_count - k == 0 )
    {
        std::cout << "YES" << std::endl;
        return;
    }
    else if(odd_count == 0 && k >= 0)
    {
        std::cout << "YES" << std::endl;
        return;
    }
    else if(odd_count < k)
    {
        std::cout << "YES" << std::endl;
        return;
    }
    else if(s.size() == 1)
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
