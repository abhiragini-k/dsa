class Solution {
public:
    int minimumPushes(string word) {
        map<char,int> m;
        for(char w:word){
            m[w]+=1;
        }
        auto ans=0;
        vector<int> freq;
        for(auto it:m){
            freq.push_back(it.second);
        }
        sort(freq.begin(),freq.end(),greater());
        for(int i=0;i<freq.size();i++){
            ans+=freq[i]*(i/8+1);
        }
        return ans;
        
    }
};