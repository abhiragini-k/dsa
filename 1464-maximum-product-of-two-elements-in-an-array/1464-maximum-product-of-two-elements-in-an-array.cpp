class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i=0,j=1;
        if(nums[j]>nums[i]) swap(i,j);
        for(int num=2;num<nums.size();num++){
            if(nums[num]>nums[i]){
                j=i;
                i=num;
            }else if(nums[num]>nums[j]){
                j=num;
            }
        }
        return (nums[i]-1)*(nums[j]-1);
    }
};