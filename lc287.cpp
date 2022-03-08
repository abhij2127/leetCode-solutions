//solution 1 using hmap time complexity O(n) space complexity O(n)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> hmap;
        for(auto num : nums){
            if(hmap[num]!=0) return num;
            else hmap[num]++;
        }
        return 0;
    }
};

//constant space solution time complexity O(logn) space complexity O(1)
int findDuplicate(vector<int> &nums){
	int turtle, hare;
        turtle = nums[0];
        hare = nums[0];
        while(true){
            turtle = nums[turtle];
            hare = nums[nums[hare]];
            if(hare==turtle) break;
        }
        int ptr1 = nums[0];
        int ptr2 = turtle;
        while(ptr1!=ptr2){
            ptr1 = nums[ptr1];
            ptr2 = nums[ptr2];
        }
        return ptr1;
}
