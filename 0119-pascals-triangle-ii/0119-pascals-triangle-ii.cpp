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
            for(int i=0;i<=rowIndex;i++){
                int it=findncr(rowIndex,i);
                ans.push_back(it);
            }
        
        return ans;
    }
};