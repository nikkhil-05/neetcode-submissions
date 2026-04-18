class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=INT_MAX, profit=INT_MIN;
        for(int i =0;i<prices.size();i++){

           int el = prices[i];
    
           if(i!=0 && el-low>profit){
                profit = el-low;
           }

            if(el<low){
                low = el;
            }
        }

        if(profit<=0) return 0;
        return profit;
    }
};