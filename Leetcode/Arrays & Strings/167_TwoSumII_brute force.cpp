class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> result;


        for (int i=0;i<numbers.size() - 1;i++){
                int tar = target - numbers[i];
            for (int j = i + 1; j<numbers.size(); j++){
                
                if (tar - numbers[j] == 0){
                    result.push_back(i+1);
                    result.push_back(j+1);
                }
            }
        }
        return result;
    }
};