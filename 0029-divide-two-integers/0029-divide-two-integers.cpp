class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;

        if(dividend==divisor)
        return 1;
        bool s=true;
        if((dividend>=0&&divisor<0)||(dividend<=0&&divisor>0))
        s=false;

        long long n=llabs(dividend);
        long long d=llabs(divisor);
        long long ans=0;
        while(n>=d)
        {
            int i=0;
            while(n>=(d<<(i+1)))
            {
                i++;
            }
            ans=ans+(1LL<<i);
            n=n-(d<<i);
        }
            if(s)
            {
                return ans;
            }
            else
            {
                return -ans;
            }

    }
};