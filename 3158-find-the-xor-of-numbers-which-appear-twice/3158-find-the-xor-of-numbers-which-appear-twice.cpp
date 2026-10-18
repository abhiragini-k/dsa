class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int result=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) result=result^nums[i];
        }
        return result;
    }
};