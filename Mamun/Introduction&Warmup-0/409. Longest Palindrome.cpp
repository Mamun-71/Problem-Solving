class Solution
{
public:
    int longestPalindrome(string s)
    {
        unordered_map<char, int> mp;

        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }

        int ans = 0, odd = 0;

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            int v = it->second;
            if (v % 2 == 1)
            {
                odd = 1;
                v--;
            }
            ans += v;
        }

        return ans + odd;
    }
};