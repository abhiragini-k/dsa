class Solution {
public:

    vector<int> dp;

    int value(vector<int>& stoneValue,int i){

        if(i>=stoneValue.size()) return 0;

        if(dp[i]!=INT_MIN) return dp[i];

        int take1=stoneValue[i]-value(stoneValue,i+1);

        int take2=INT_MIN;
        if(i+1<stoneValue.size()){
            take2 = stoneValue[i]+stoneValue[i+1] - value(stoneValue,i+2);
        }

        int take3=INT_MIN;
        if(i+2<stoneValue.size()){
            take3 = stoneValue[i]+stoneValue[i+1]+stoneValue[i+2] - value(stoneValue,i+3);
        }

        return dp[i]=max(take1,max(take2,take3));
    }

    string stoneGameIII(vector<int>& stoneValue) {
        dp.assign(stoneValue.size(),INT_MIN);
        int ans=value(stoneValue,0);
        if(ans>0) return "Alice";
        else if(ans<0) return "Bob";
        else return "Tie";
    }
};