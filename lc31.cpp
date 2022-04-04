#include<bits/stdc++.h>
/**
 * Next Permutation
 * [1, 2, 3] -> [1, 3, 2]
 * [3, 2, 1] -> [1, 2, 3] ** Because theres nothing greater than 3, 2, 1**
 * 
 */
using namespace std;

void swap(vector<int>& nums, int i, int j){
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i, j;
        int index = -1;
        j = nums[n-1];
        //starting from the right find the first pair which satisfy
        //a[i] > a[i-1]
        for(i = n-1; i>0; i--){
            if(nums[i] > nums[i-1]){
                index = i;
                break;
            }
        }
        if(index == -1){
            i = 0;
            j = n-1;
            while(i<j){
                swap(nums, i, j);
                i++;
                j--;
            }
            return;
        }
        

        // find the smallest number which is greater than 
        // the number at index-1;
        int targetNumber = nums[index-1];
        /*int smallestGreater = 0, smallestIndex;
        for(j=index;j<n;j++){
            if(nums[j]>targetNumber&&nums[j]<smallestGreater){
                smallestGreater = nums[j];
                smallestIndex = j;
            }
        }*/

        j = n-1;
        while(nums[j]<=targetNumber){
            j--;
        } 
        //now swap the number at index-1 and the number we found in array
        // nums[index-1] = nums[smallestIndex];
        // nums[smallestIndex] = targetNumber;
        swap(nums, index-1, j);
        for(auto num: nums){
            cout<<num<<" ";
        }
        cout<<endl;

        // reverse the list to the right of index 
        i = index;
        j = n-1;
        while(i<j){
            swap(nums, i, j);
            i++;
            j--;
        }
        return;
}

int main(){
    vector<int> testCase1 = {3,2,1};
    vector<int> testCase2 = {1, 5, 8, 4, 7, 6, 5, 3, 1};
    vector<int> failedCase1 = {1, 5, 1}; //should return {5, 1, 1}
    nextPermutation(testCase2);
    for(auto num : testCase2){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
    
}