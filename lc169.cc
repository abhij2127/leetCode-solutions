//169. Majority Element
//Given an array nums of size n, return the majority element.

class Solution1 {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hmap;
        int n = nums.size();
        for(auto num : nums){
            hmap[num]++;
        }
        for(auto k : hmap){
            if(k.second>n/2) return k.first;
        }
        return 0;
    }
};

class Solution2 {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};

class Solution3 {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate;
        
        for(auto num : nums){
            if(count == 0) candidate = num;
            count += num==candidate ? 1 : -1;
        }
        return candidate;
    }
};