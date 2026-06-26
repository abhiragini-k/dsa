class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0,minbuy=prices[0];
        for(int price:prices){
            minbuy=min(price,minbuy);
            maxprofit=max(maxprofit,price-minbuy);
        }
        return maxprofit;
    }
};