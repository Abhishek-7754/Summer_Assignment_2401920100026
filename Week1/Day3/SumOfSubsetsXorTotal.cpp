class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int tot=0;
        for(int num : nums){
            tot|=num;
        }
        return tot*(1<<(nums.size()-1));
        
    }
};
