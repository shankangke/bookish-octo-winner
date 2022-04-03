class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> seen;
    int result = 0, start = 0, n = s.size();
    for (int i = 0; i < n; ++i) {
      if (seen.count(s[i]) == 1) {
        result = max(result, i - start);
        int newstart = seen[s[i]] + 1;
        for (int j = start; j < newstart; ++j) {
          seen.erase(s[j]);
        }
        start = newstart;
      }
      seen[s[i]] = i;
    }
    result = max(result, n - start);
    return result;
  }
};
