class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //moore's voting algo
        int ele, count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                ele=nums[i];
                count=1;
            }else if(ele==nums[i]){
                count=count+1;
            }
            else{
                count--;
            }
        }
        return ele;
    }
};