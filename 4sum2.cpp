class Solution {
public:
    unordered_map<int, int> sum;
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count = 0;
        for(auto const i : nums1){
            for(auto const j : nums2){
                sum[i+j]++;
            }
        }
        for(auto const i : nums3){
            for(auto const j : nums4){
                if(sum.find(-(i+j))!=sum.end()){
                    count+=sum[-(i+j)];
                }
            }
        }
        return count;
    }
};