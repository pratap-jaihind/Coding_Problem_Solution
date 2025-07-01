class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            // int maxi = 0;
            // for(int i =0 ; i < prices.size() ; i++){
            //     for(int j = i+1 ; j< prices.size() ; j++){
            //         if(prices[j] > prices[i]){
            //             int profit = prices[j] - prices[i];
            //             maxi = max(maxi , profit);
            //         }
            //     }
            // }
    
            // return maxi;
    
            int maxProfit = 0;
            int mini = INT_MAX;
    
            for(int i = 0 ; i < prices.size() ; i++){
                if(prices[i] > mini){
                    maxProfit = max(maxProfit , prices[i] - mini);
                }
                else{
                    mini = prices[i];
                }
            }
            return maxProfit;
        }
    };