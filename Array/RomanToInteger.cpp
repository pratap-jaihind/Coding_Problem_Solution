class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        for (int i = 0; i < s.length(); i++) {
            if (i == s.length() - 1 || mp[s[i]] >= mp[s[i + 1]]) {
                num += mp[s[i]];
            } else {
                num -= mp[s[i]];
            }
        }

        return num;
    }
};
