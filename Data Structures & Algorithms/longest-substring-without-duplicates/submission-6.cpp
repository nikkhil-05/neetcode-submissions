#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if(s.size()<=1) return s.size();
        int j=0;
        unordered_map<char,int> mp;
        int ans=INT_MIN;
        int i=0;
        for(i=0;i<s.size();i++){

            if(!mp[s[i]]){
                mp[s[i]]++;
            }
            else{
                mp.clear();
                ans = max(ans,abs(j-i));
                j++;
                i=j-1;
            }

        }
        ans = max(ans,abs(j-i));

        return ans;
    }
};
