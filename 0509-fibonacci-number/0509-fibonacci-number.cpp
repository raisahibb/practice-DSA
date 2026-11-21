class Solution {
public:
    int fib(int n) {
        vector<int> memo(n+1, -1);
        return fibbo(n, memo);
    }
    int fibbo(int n, vector<int> &memo)
    {
        if(n == 0 || n == 1)
        {
            memo[n] = n;

            return memo[n];
        }
            
        if(memo[n] != -1)
            return memo[n];
        
        int x = fibbo(n - 1, memo);
        int y = fibbo(n - 2, memo);

        memo[n] = x + y;

        return memo[n];
    }
};