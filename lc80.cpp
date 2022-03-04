#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
       int removeDuplicates(vector<int>& nums) {
        int len = 2;
      int n = nums.size();
      if(n <= 2)return n;
      for(int i = 2; i < n; i++){
         if( nums[i] != nums[len - 2] || nums[i] != nums[len - 1]){
            nums[len] = nums[i];
            len++;
         }
      }
      return len;
    }
}

//my solution
int test(vector<int> &n){
	vector<int>::iterator p = n.begin();
	vector<int>::iterator j;
	while(p!=n.end()){
		int cur = *p;
		int num = 0;
		j = p;
		while(*j==cur&&j!=n.end()){
			num++;
			if(num>2){
				n.erase(j);
			}else j++;
		}
		p++;
	}
	return n.size();
}

void print(vector<int> &n){
	for(auto const i : n){
		cout<<i<<" ";
	}
}
int main(){
	int arr[] = {1,1,2,2};
	vector<int> nums;
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		nums.push_back(arr[i]);
	}
	int m = test(nums);
	cout<<m<<endl;
	print(nums);
	//1  3  5  7  9  9
	
	
	/*int f = removeDuplicates(nums);
	printf("%d\n",f);
	print(nums);*/
	
/*[1,1,2,2]

[1,1,1,2,2,3]
[0,0,1,1,1,1,2,3,3]
[1,1,1,2,2,3]*/
	return 0;
}



