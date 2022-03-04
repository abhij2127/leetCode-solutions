#include<iostream>
#include<cstdlib>
#include<vector>
#include<map>
using namespace std;

/*int findPairs(vector<int>& nums, int k) {
        
}*/
	
int main(){
	//vector<vector<int>> testcases{{3,1,4,1,5};
	map<int,vector<int>> testcases;
	testcases.insert(pair<int,vector<int>>{3,{3,1,4,1,5}});
	map<int,vector<int>>::iterator p;
	p = testcases.begin();
	while(p!=testcases.end()){
		cout<< (p->first) << " " <<(p->second) << endl;
		p++;
	}
	return 0;
}