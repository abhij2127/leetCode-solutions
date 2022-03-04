//70. Climbing Stairs
// You are climbing a staircase. It takes n steps to reach the top.

//Each time you can either climb 1 or 2 steps. In how many distinct\ ways can you climb to the top?


class Solution {
public:
    unordered_map<int,int> memo;
    int climbStairs(int n) {
        if(n==1 || n==2) return n;
        if(memo.find(n)!=memo.end()) return memo[n];
        memo[n] = climbStairs(n-1) + climbStairs(n-2);
        return memo[n];
    }
};