class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        
        sort(nums.begin(),nums.end());
        int minno = nums[0];
        int maxno = nums[nums.size()-1];
        for(int i=1;i<nums.size();i++){
            
            minno++;
            if(minno==maxno) break;
            while(minno<nums[i]){
                
                if(minno!=nums[i]) ans.push_back(minno);
                minno++;
            }
        }
        return ans;
    }
};