class Solution {
public:

    void findSubsets(vector<int> &nums, vector<vector<int>> &result, vector<int> curr, int i){

            if (i >= nums.size()){
                result.push_back(curr);
                return;
            }

            int element = nums[i];

            //Include
            curr.push_back(element);
            findSubsets(nums,result,curr,i+1);

            //Exclude
            curr.pop_back();
            findSubsets(nums,result,curr,i+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> result;
        vector<int> curr;
        findSubsets(nums,result,curr,0);
        return result;
    }
};