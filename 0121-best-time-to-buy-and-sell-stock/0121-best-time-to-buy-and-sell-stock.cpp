class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0,minno=prices[0];
        for(int price:prices){
            minno=min(price,minno);
            maxprofit=max(maxprofit,price-minno);
        }
        return maxprofit;
    }
};