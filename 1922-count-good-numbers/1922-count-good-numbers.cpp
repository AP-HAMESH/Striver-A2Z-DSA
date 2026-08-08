class Solution {
public:
    const long long mod=1000000007;
    long long power(long long base,long long exp)
    {
        long long ans=1;
        while(exp>0)
        {
            if(exp%2==1)
            {
                ans=(ans*base)%mod;
            }
            base=(base*base)%mod;
            exp=exp/2;
        }
        return ans;
    }
    int countGoodNumbers(long long n)
    {
        long long odd=(n)/2;
        long long even=(n+1)/2;
        
        long long ans=(power(5,even)*power(4,odd))%mod;
        return ans;
    }
    
    
};