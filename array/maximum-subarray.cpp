class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int max = nums[0];

        for (int i = 1; i < nums.size(); ++i)
        {
            nums[i] = std::max(nums[i], nums[i] + nums[i - 1]);
            max = std::max(max, nums[i]);
        }

        return max;
    }
};