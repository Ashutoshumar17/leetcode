class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> need, have;

        for (char c : t)
            need[c]++;

        int l = 0;
        int count = 0;
        int start = -1;
        int res = INT_MAX;

        for (int h = 0; h < s.size(); h++) {

            have[s[h]]++;

            if (need.count(s[h]) && have[s[h]] <= need[s[h]])
                count++;

            while (count == t.size()) {

                int len = h - l + 1;
                if (len < res) {
                    res = len;
                    start = l;
                }

                have[s[l]]--;

                if (need.count(s[l]) && have[s[l]] < need[s[l]])
                    count--;

                l++;
            }
        }

        if (start == -1)
            return "";

        return s.substr(start, res);
    }
};