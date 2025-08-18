#include <bits/stdc++.h>

using namespace std;

int main()
{
    string binary1, binary2;

    cin >> binary1 >> binary2;

    string result = "";
    int i = binary1.length() - 1,
        j = binary2.length() - 1,
        carry = 0;

    while (i >= 0 || j >= 0) {
        int sum = carry;

        if (i >= 0) sum += binary1[i] - '0';
        if (j >= 0) sum += binary2[j] - '0';

        result += char((sum % 2) + '0');
        carry = sum / 2;

        --i;
        --j;
    }

    if (carry) result += '1';

    reverse(result.begin(), result.end());

    cout << result << endl;
}
