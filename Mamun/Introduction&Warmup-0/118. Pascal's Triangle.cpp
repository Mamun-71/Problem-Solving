class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {

        vector<vector<int>> ans;
        vector<int> temp;
        temp.push_back(1);
        ans.push_back(temp);

        for (int i = 2; i <= numRows; i++)
        {
            vector<int> prev = ans.back();
            vector<int> temp;

            temp.push_back(1);
            for (int j = 0; j < prev.size() - 1; j++)
            {
                temp.push_back(prev[j] + prev[j + 1]);
            }
            temp.push_back(1);

            ans.push_back(temp);
        }
        return ans;
    }
};