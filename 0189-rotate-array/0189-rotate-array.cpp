class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;//for out of bounds stuff... like if k is bigger than n itself then it will give erorr in reverse fn thats why we are taking the remainder of k cause that means the same but the unnecessary steps are cut off
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};