/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    int nextDigit = 0;
    ListNode *ptr1 = l1, *ptr2 = l2;
    ListNode *result = new ListNode(), *ptr = result;
    while (ptr1 != nullptr || ptr2 != nullptr || nextDigit != 0) {
      ptr->next = new ListNode(nextDigit);
      ptr = ptr->next;
      nextDigit = 0;
      if (ptr1 != nullptr) {
        ptr->val += ptr1->val;
        ptr1 = ptr1->next;
      }
      if (ptr2 != nullptr) {
        ptr->val += ptr2->val;
        ptr2 = ptr2->next;
      }
      if (ptr->val > 9) {
        ptr->val %= 10;
        nextDigit = 1;
      }
    }
    return result->next;
  }
};