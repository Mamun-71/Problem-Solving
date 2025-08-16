// Link - https://leetcode.com/problems/maximum-69-number/description

#include<bits/stdc++.h>

using namespace std;

int main() {
    int num;

    cin >> num;

    int index = -1,
        position = 0,
        temp = num;

    while(temp > 0) {
        if(temp % 10 == 6) {
            index = position;
        }

        temp /= 10;
        position++;
    }

    if(index != -1) {
        num = num + 3 * pow(10, index);
    }

    cout << num << endl
}
