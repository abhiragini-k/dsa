class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //optimal approach
        int n=nums.size();
        int totalsum=(n*(n+1))/2;
        int currentsum=0;
        for(int num:nums){
            currentsum+=num;
        }
        return totalsum-currentsum;
    }
};