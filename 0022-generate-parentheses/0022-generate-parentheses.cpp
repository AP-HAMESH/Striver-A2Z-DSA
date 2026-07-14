class Solution {
public:
    bool isValid(string s)
    {
        int bal=0;
        for(char c:s)
        {
            if(c=='(')
            bal++;
            else
            bal--;
            if(bal<0)
            return false;
        }
        return bal==0;
    }
    //recursice func
    void generate(string curr,int n,vector<string>&res)
    {
        if(curr.length()==2*n)
        {
            if(isValid(curr))
            {
                res.push_back(curr);
            }
            return;
        }
        generate(curr+'(',n,res);
        generate(curr+')',n,res);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generate("",n,res);
        return res;
    }
};