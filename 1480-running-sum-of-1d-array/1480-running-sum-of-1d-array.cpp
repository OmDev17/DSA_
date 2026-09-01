class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int lastsum=0;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]+lastsum;
            lastsum=nums[i];
        }
        return nums;
    }

};