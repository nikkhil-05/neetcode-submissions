#include<vector>
#include<unordered_map>>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> um;

        for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
        }

        for(int i=1;i<INT32_MAX;i++){
            if(um[i]==0){
                return i;
            }
        }

        return -1;
    }
};