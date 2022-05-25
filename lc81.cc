/*

There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).

Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].

Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.

*/
 bool search(vector<int>& nums, int target) {
        int k = 0;
        int prev = nums[0];
        for(auto num: nums){
            if(num<prev) break;
            else prev = num;
            k++;
        }
        int s = 0;
        int l = nums.size()-1;
        while(s<l){
            int mid = (s+l)/2;
            if(num[mid]==target)
            if(mid<k){
                if()
            }
        }
        return true;
    }