class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {

        unordered_map<char, char> s_mp;
        unordered_map<char, char> t_mp;

        bool flag = true;

        for (int i = 0; i < s.size(); i++)
        {
            if (!s_mp[s[i]])
            {
                if (t_mp[t[i]])
                {
                    flag = false;
                    break;
                }
                s_mp[s[i]] = t[i];
                t_mp[t[i]] = s[i];
            }
            else
            {
                if (s_mp[s[i]] != t[i] || t_mp[t[i]] != s[i])
                {
                    flag = false;
                    break;
                }
            }
        }

        return flag;
    }
};