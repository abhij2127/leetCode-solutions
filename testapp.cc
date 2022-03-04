#include<bits/stdc++.h>
using namespace std;

//min cost n-stairs problem;
//We can either start from first step or second and either take two steps or one;
class Solution{
public:
    unordered_map<int,int> memo;
    int climbStairs(int n) {
        if(n==1 || n==2) return n;
        if(memo.find(n)!=memo.end()) return memo[n];
        memo[n] = climbStairs(n-1) + climbStairs(n-2);
        return memo[n];
    }

    int minCostofStairs(vector<int> stairs){
        int n = stairs.size();
        int *arr = new int[n+1];
        arr[0] = 0;
        return n;
    }
};
int main(){
    vector<int> stairs = {1,3,4,14,13,12,45,12,33,42};
    int n = stairs.size();
    Solution *solve = new Solution;
    //int res = solve->minCostofStairs(stairs);
    int res = solve->climbStairs(4);
    cout<<res;
}