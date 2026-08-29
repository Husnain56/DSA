class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
         vector<int> prefix(nums.size());
         vector<int> postfix(nums.size());
         vector<int> answer(nums.size());

         for (int i = 0 ; i<nums.size() ; i++){

            if(i==0){
                prefix[i]  = nums[i];
            }
            else{
                prefix[i] = nums[i] * prefix[i-1];
            }
         }

         for (int i = nums.size()-1 ; i>=0 ; i--){

            if(i == nums.size()-1){
                postfix[i] = nums[i];
            }
            else{
                postfix[i] = nums[i] * postfix[i+1];
            }
         }
 
         for (int i = 0 ; i < nums.size() ; i++){
            
            int prod = 1;
            if(i==0){
                prod = 1 * postfix[i+1];
            }
            else if(i==nums.size()-1){
                prod = prefix[i-1] * 1;
            }
            else{
                prod = prefix[i-1] * postfix[i+1];
            }
            answer[i] = prod;
         }

        return answer; 

    }
};