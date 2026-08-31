class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int mid=nums.size()/2;
        int end=nums.size()-1;
        if(target<nums[start]){
            return 0;
        }
        else if(target>nums[end]){
            return end+1;
        }
        else{
        while(start<=end){
            if(nums[mid]==target){
                return mid;
            }
            else{
                if(target<nums[mid]){
                    end=mid-1;
                    mid=(start+end)/2;
                }
                else{
                    start=mid+1;
                    mid=(start+end)/2;
                }
            }
        }
        }
        return mid+1;
    }
};