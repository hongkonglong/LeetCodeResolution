#include <iostream>
#include <vector>

int subarraySum(std::vector<int>& nums, int k)
{
    int len = nums.size();
    std::vector<int> pre_nums(len + 1);
    pre_nums[0] = 0;
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        pre_nums[i + 1] = pre_nums[i] + nums[i];
    }
    for (int j = 1; j <= len; j++)
    {
        for (int i = 0; i < j; i++)
        {
            if (pre_nums[j] - pre_nums[i] == k)
                ans++;
        }
    }
    return ans;
}

int main()
{

}
