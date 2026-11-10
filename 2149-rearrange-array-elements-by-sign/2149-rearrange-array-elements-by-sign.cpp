class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> nums1;
        vector<int> nums2;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) nums1.push_back(nums[i]);
            else nums2.push_back(nums[i]);
        }
        int i=0;
        while(i<nums.size()/2){
            ans.push_back(nums1[i]);
            ans.push_back(nums2[i]);
            i++;
        }
        return ans;
    }
};