class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0) return {1};
        vector<int> prev=getRow(rowIndex-1);
        vector<int> ans;
        ans.push_back(1);
        for(int c=1;c<rowIndex;c++){
            ans.push_back(prev[c]+prev[c-1]);
        }
        ans.push_back(1);
        return ans;

    }
};