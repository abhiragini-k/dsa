class Solution {
public:
    int countPrimes(int n) {
        vector<char> prime(n,1);
        if(n<=2) return 0;
        prime[0]=0;
        prime[1]=0;
        for(int i=3;i*i<n;i+=2){
            if(prime[i]){
                for(int j=i*i;j<n;j+=2*i){
                    prime[j]=false;
                }
            }
        }
        int count=1;
        for(int i=3;i<n;i+=2){
            if(prime[i]) count++;
        }

       

        return count;
    }
};