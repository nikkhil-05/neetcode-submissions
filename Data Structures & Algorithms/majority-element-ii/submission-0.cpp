#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>um;
        unordered_set<int> s(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
        }

        int req = nums.size()/3;
        for(const auto& el: s){
            if(um[el]>req){
                ans.push_back(el);
            }
        }

        return ans;
        

    }
};