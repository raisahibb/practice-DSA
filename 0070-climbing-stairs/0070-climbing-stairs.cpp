class Solution {
public:
    int climbStairs(int n) {
        vector<int> memo(n + 1, -1);
        return count(n, memo);
    }
    int count(int n, vector<int> &memo)
    {
        if(n == 0)
        {
            memo[n] = 1;
            return memo[n];
        }
        if(n == -1)
        {
            return 0;
        }

        if(memo[n] != -1)
            return memo[n];

        int x = count(n - 1, memo);
        int y = count(n - 2, memo);

        memo[n] = x + y;

        return memo[n];
    }
};