class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int cost =0;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(min>prices[i]){
                min=prices[i];
            }
            else{
                cost=prices[i]-min;
                if(cost>profit){
                    profit=cost;
                }
            }
        }
        return profit;
    }
};