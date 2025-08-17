// Link - https://leetcode.com/problems/longest-palindrome/description/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    cin >> str;

    int validPalindromeLength = 0;
    int maxOddLength = 0;
    map<int, int> alphabets;

    for(int i = 65; i <= 90; ++i) {
        alphabets[i] = 0;
    }

    for(int i = 97; i <= 122; ++i) {
        alphabets[i] = 0;
    }

    for(int i = 0; i < str.length(); ++i) {
        alphabets[int(str[i])]++;
    }

    for (int i = 65; i <= 122; ++i) {
        if(alphabets[i] % 2 == 0) {
            validPalindromeLength += alphabets[i];
        } else {
            maxOddLength = max(maxOddLength, alphabets[i]);
        }
    }

    validPalindromeLength += maxOddLength;

    cout << validPalindromeLength << endl;
}
