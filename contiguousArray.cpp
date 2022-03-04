class Solution {
public:
    unordered_map<int, int> num;
    //map of  sum->currentIndex
    int findMaxLength(vector<int>& nums) {
        num.insert(pair<int,int>(0,-1));
        int maxl = 0;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            nums[i]==0?sum--:sum++;
            if(num.find(sum)!=num.end()){
                maxl = max(maxl,i-num[sum]);
            }
            else{
                num.insert(pair<int,int>(sum,i));
            }
        }
        return maxl;
    }
};
