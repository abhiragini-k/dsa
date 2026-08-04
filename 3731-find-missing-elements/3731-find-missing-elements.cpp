class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> ul(nums.begin(),nums.end());
        int minel = *min_element(nums.begin(),nums.end());
        int maxel = *max_element(nums.begin(),nums.end());
        for(int i=minel+1 ; i<maxel;i++){
            if(ul.find(i)==ul.end()) ans.push_back(i);
        }
        return ans;
    }
};