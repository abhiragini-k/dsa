class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xoring=0;
        for(int i=0;i<nums.size();i++){
            xoring^=nums[i];
        }
        return xoring;
    }
};