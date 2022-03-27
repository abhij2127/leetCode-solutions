#include<bits/stdc++.h>
using namespace std;

//this solution can be optimised
//Time Complexity O(n)
int singleNumber(vector<int> &nums){
	map<int, int>frequency;
	for(auto num : nums){
		frequency[num]++;
	}
	map<int, int>::iterator p;
	p = frequency.begin();
	while(p!=frequency.end()){
		if(p->second==1) return p->first;
		p++;
	}

}

//what we have here
//a array of positive integers
//every element repeat twice except one
//fint the element
//

int main(){
	vector<int> nums = {1,2,1,2,4};
	cout<<singleNumber(nums)<<endl;
	return 0;
}
