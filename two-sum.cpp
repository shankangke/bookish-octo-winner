class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> seen;
    for (int i = 0; i < nums.size(); ++i) {
      if (seen.count(target - nums[i]) == 1) {
        return {seen[target - nums[i]], i};
      } else {
        seen[nums[i]] = i;
      }
    }
    return {};
  }
};
