class Solution
{
public:
    int reverseBits(int n)
    {
        string s = "";
        while (n != 0)
        {
            char ch = '0';
            if (n % 2 == 1)
                ch = '1';
            s.push_back(ch);
            n = n / 2;
        }
        int d = 32 - s.size();
        while (d--)
            s.push_back('0');

        int p = s.size() - 1;
        int ans = 0;
        cout << s << endl;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                ans += pow(2, p);
            }
            p--;
        }

        return ans;
    }
};