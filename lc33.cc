/*

There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed).For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

*/
#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        int k = 0;
        int prev = nums[0];
        int result = -1;
        for(auto num: nums){
            if(num<prev) break;
            else prev = num;
            k++;
        }
        cout<<k<<endl;
        bool flag = true;
        if(k == nums.size())
            flag = false;

        if(!flag){
            int l = 0;
            int r = nums.size()-1;
            while(l!=r){
                int mid = l+(r-l)/2;
                if(nums[mid]==target){
                    result = mid;
                    break;
                }
                else if(nums[mid]>target){
                    r = mid;
                }
                else{
                    l = mid+1;
                }
            }
        }

        else{
            return k;
        }
        /*while(s<l){
            int mid = (s+l)/2;
            if(num[mid]==target) return mid;
            
            if(num[mid]<target){
                if(mid<k){
                    
                }
            }
            
        }*/
        return result;
    }


int main(){
    vector<int> nums = {4,5,6,7,0,1,2};//real test case
    // for debugging 
    vector<int> test = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int res = search(nums, 8);
    res = search(test, 8);
    cout<<res;
    return 0;
}