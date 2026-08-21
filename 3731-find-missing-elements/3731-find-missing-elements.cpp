class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min = nums[0], max = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < min) {
                min = nums[i];
            }
            else if (nums[i] > max) {
                max = nums[i];
            }
        }

        sort(nums.begin(), nums.end());

        int j = 0;
        vector<int> result;

        while (min != max) {
            if (nums[j] == min) {
                min++;
                j++;
            }
            else {
                result.push_back(min);
                min++;
            }
        }

        return result;
    }
};