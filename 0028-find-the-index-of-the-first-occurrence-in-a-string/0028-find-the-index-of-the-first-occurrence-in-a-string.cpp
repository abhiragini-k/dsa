class Solution {
public:
    int strStr(string haystack, string needle) {

        int position = haystack.find(needle);
        
        if(position>=0) return position;
        else return -1;
    }
};