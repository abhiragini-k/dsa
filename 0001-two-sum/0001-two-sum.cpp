class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int more=target-a;
            if(hash.find(more)!=hash.end()) return {hash[more],i};
            hash[a]=i;
        }
        return {-1,-1};
    }
};