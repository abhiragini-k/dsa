class Solution {
public:
    bool isPalindrome(int x) {
        int real=x;
        long long  reverse=0;
        if(x<0) return false;
        while(x!=0){
            int lastdigit=x%10;
            reverse= reverse*10 + lastdigit;
            x=x/10;
        }
        return real==reverse;
    }
};