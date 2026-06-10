class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int low = 0;
        int high = nums.size() - 1;
        int minValue = INT_MAX;

        while (low <= high){

            int mid = low + (high - low) / 2;

            if (nums[mid] >= nums[low]){
                minValue = min(minValue,nums[low]);
                low = mid + 1;
            }
            else{
                minValue = min(minValue,nums[mid]);
                high = mid - 1;
            }
        }

        return minValue;
    }
};