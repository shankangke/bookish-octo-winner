class Solution {
public:
  string longestPalindrome(string s) {
    int index = 0;
    string result = "";
    while (index < s.length()) {
      int left, right;
      left = right = index;
      while (left >= 0 && s[left] == s[index]) {
        --left;
      }
      while (right < s.length() && s[right] == s[index]) {
        ++right;
      }
      while (left >= 0 && right < s.length() && s[left] == s[right]) {
        --left;
        ++right;
      }
      if (right - left - 1 > result.length()) {
        result = s.substr(left + 1, right - left - 1);
      }
      ++index;
    }
    return result;
  }
};
