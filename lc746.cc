#include<bits/stdc++.h>
using namespace std;

//tabulation successfull
int tab(vector<int>& cost){
	int n = cost.size();
	int stair1 = 0, stair2 = 0;
	for(auto x : cost){
		int result = x + min(stair1, stair2);
		stair2 = stair1;
		stair1 = result;
	}
	return min(stair2,stair1);
}

//recursion pending;

int solve(int n, vector<int> cost){
	if(n == 0) return cost[0] ;
    if(n == 1) return cost[1] ;
   
     int top = min(solve(n-1,cost) + cost[n], solve(n-2,cost)+ cost[n] );
	 return top;
}

int minCostClimbingStairs(vector<int>& cost) {
	int n = cost.size();
	return solve(n, cost);

}

int main(){
	vector<int> test = {1,100,1,1,1,100,1,1,100,1};
	int res = minCostClimbingStairs(test);
	cout<<res;
	return 0;
}

 