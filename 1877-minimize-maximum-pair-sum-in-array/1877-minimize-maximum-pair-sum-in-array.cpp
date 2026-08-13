class Solution {
public:
    int minPairSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int* p1 = &nums[0];
        int* p2 = &nums[nums.size() - 1];
        int max_sum = 0;

        while (p1 < p2) {
            max_sum = std::max(max_sum, *p1 + *p2);
            p1++;
            p2--;
        }

        return max_sum;
    }
    
};