# Kadane's Algorithm

This is used to find the maximum sum subarray.

```C++
int maxSubArraySum(const std::vector<int>& nums) {
        int curr_sum = 0;
        int max_sum = INT_MIN;

        for (int num : nums) {
        // Decide if it's better to continue the current subarray or start a new one.
        curr_sum = std::max(num, curr_sum + num);
        // Update the maximum sum if the current sum becomes larger.
        max_sum = std::max(max_sum, curr_sum);
        }

        return max_sum;
    }
```

This works for the case when all the elements are negative.

To find minSumSubarray, just replace the max with min

```C++
int minSubArraySum(const std::vector<int>& nums) {
        int curr_sum = 0;
        int min_sum = INT_MAX;

        for (int num : nums) {
            curr_sum = std::min(num, curr_sum + num);
            min_sum = std::min(min_sum, curr_sum);
        }

        return min_sum;
    }
```

## Max Circular Sum Subarray

Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.

A circular array means the end of the array connects to the beginning of the array. Formally, the next element of nums[i] is nums[(i + 1) % n] and the previous element of nums[i] is nums[(i - 1 + n) % n].

A subarray may only include each element of the fixed buffer nums at most once. Formally, for a subarray nums[i], nums[i + 1], ..., nums[j], there does not exist i <= k1, k2 <= j with k1 % n == k2 % n.

We solve this using the above two methods: There can be two cases, either we find the simple max sum subarray using, or, we can find the min sum subarray and subtract it from the total sum!

```C++
class Solution {
public:
    int maxSubArraySum(const std::vector<int>& nums) {
        int curr_sum = 0;
        int max_sum = INT_MIN;

        for (int num : nums) {
            curr_sum = std::max(num, curr_sum + num);
            max_sum = std::max(max_sum, curr_sum);
        }

        return max_sum;
    }
    int minSubArraySum(const std::vector<int>& nums) {
        int curr_sum = 0;
        int min_sum = INT_MAX;

        for (int num : nums) {
            // if (curr_sum > 0) {
            //     curr_sum = 0;
            // }
            // curr_sum += num;
            curr_sum = std::min(num, curr_sum + num);
            min_sum = std::min(min_sum, curr_sum);
        }

        return min_sum;
    }

    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int totalSum = std::accumulate(nums.begin(), nums.end(), 0);
        // 2 options, simple maxSubarraySum or Total - MinSubarraySum
        
        int maxSum = maxSubArraySum(nums);
        int minSum = minSubArraySum(nums);

        if((totalSum == minSum)){
            return maxSum;
        }

        return max(maxSum, totalSum-minSum);
    }
};
```