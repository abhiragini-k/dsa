class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(int i=0;i<s.length();i++) freq[s[i]]++;
        vector<pair<char,int>> chars;
        for(auto p:freq) chars.push_back({p.first,p.second});
        sort(chars.begin(),chars.end(),[](auto a,auto b){return a.second>b.second;});
        string res="";
        for(auto p:chars) res+=string(p.second,p.first);
        return res;
        
    }
};