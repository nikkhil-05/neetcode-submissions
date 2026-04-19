class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mp;
        for(char c : t) mp[c]++;

        int required = t.size();
        int l = 0, r = 0;
        int minLen = INT_MAX, start = 0;

        while(r < s.size()) {
            if(mp[s[r]] > 0) required--;
            mp[s[r]]--;

            r++;

            while(required == 0) {
                if(r - l < minLen) {
                    minLen = r - l;
                    start = l;
                }

                mp[s[l]]++;
                if(mp[s[l]] > 0) required++;

                l++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};