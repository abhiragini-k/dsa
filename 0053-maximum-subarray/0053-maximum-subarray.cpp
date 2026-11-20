class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int ini=0;
        for(int i=0;i<nums.size();i++){
            ini+=nums[i];
            if(ini>maxsum) maxsum=ini;
            if(ini<0) ini=0;
        }
        return maxsum;
    }
};