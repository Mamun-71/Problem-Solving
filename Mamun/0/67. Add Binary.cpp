class Solution
{
public:
    string addBinary(string a, string b)
    {

        /// extra handle
        int l1 = a.size();
        int l2 = b.size();

        int ex = abs(l1 - l2);
        string pad = "";
        while (ex--)
        {
            pad.push_back('0');
        }

        if (a.size() > b.size())
        {
            pad = pad + b;
            b = pad;
        }
        else
        {
            pad = pad + a;
            a = pad;
        }

        int in = a.size() - 1;
        string sum = "";
        char ca = '0';

        while (in >= 0)
        {
            if (a[in] == '1' && b[in] == '0')
            {
                if (ca == '1')
                {
                    sum.push_back('0');
                    ca = '1';
                }
                else
                {
                    sum.push_back('1');
                }
            }
            else if (a[in] == '0' && b[in] == '1')
            {
                if (ca == '1')
                {
                    sum.push_back('0');
                    ca = '1';
                }
                else
                {
                    sum.push_back('1');
                }
            }
            else if (a[in] == '0' && b[in] == '0')
            {
                if (ca == '1')
                {
                    sum.push_back('1');
                    ca = '0';
                }
                else
                {
                    sum.push_back('0');
                }
            }
            else
            {
                if (ca == '1')
                {
                    sum.push_back('1');
                }
                else
                {
                    sum.push_back('0');
                }
                ca = '1';
            }

            in--;
        }

        if (ca == '1')
            sum.push_back(ca);

        reverse(sum.begin(), sum.end());

        return sum;
    }
};