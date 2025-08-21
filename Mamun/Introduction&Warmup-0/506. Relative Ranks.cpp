class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {

        map<int, string> mp;
        vector<string> ans;

        for (int i = 0; i < score.size(); i++)
        {
            mp[score[i]] = "";
        }
        int n = score.size();

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            cout << it->first << endl;
            string k = to_string(n);
            it->second = k;
            if (n == 1)
            {
                it->second = "Gold Medal";
            }
            else if (n == 2)
            {
                it->second = "Silver Medal";
            }
            else if (n == 3)
            {
                it->second = "Bronze Medal";
            }
            n--;
        }

        for (int i = 0; i < score.size(); i++)
        {
            ans.push_back(mp[score[i]]);
        }

        return ans;
    }
};