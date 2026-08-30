class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
        int mins=nums[0];
        int maxx=nums[0];
        int mxIndex=0;
        int mnIndex=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxx){
                maxx=nums[i];
                mxIndex=i;

            }
            else if(nums[i]<mins){
                mins=nums[i];
                mnIndex=i;
            }
        }
        int left = max(mnIndex, mxIndex) + 1;
        int right = nums.size() - min(mnIndex, mxIndex);
        int bothSides = min(mnIndex, mxIndex) + 1 + nums.size() - max(mnIndex, mxIndex);
        return min(left,min(right,bothSides));
    }
};