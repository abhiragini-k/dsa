class Solution {
public:

    int findncr(int n, int r){
        long long res=1;
        for(int i=0;i<r;i++){
            res=res*(n-i);
            res=res/(i+1);
        }
        return res;
    }

    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        ans.push_back(1);
            for(int i=1;i<=rowIndex;i++){
                int it=findncr(rowIndex,i);
                ans.push_back(it);
            }
        
        return ans;
    }
};