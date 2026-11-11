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
            for(int j=1;j<=rowIndex;j++){
                int it=findncr(rowIndex,j);
                ans.push_back(it);
            }
        
        return ans;
    }
};