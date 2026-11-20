class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int ini=0;
        for(int i=0;i<nums.size();i++){
            if(ini<0){
                ini=0;
            }
            ini+=nums[i];
            maxsum=max(maxsum,ini);
        }
        return maxsum;
    }
};