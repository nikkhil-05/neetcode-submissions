class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<int> need(26,0);
        vector<int> curr(26,0);

        for(auto &c: s1){
            need[c - 'a']++;
        }

        int winSize = s1.size();
        int l=0; int r=0;

        while(r<s2.size()){
            while(r < s2.size() && r-l < winSize){
                curr[s2[r] - 'a'] ++;
                r++;
            }
            if(curr==need) return true; 


            curr[s2[l] - 'a'] --;
            l++;
        }

        return false;
    }
};