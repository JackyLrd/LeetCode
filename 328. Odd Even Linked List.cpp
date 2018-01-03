/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* tempOdd = NULL;
        ListNode* tempEven = NULL;
        ListNode* mid = NULL;
        auto cur = head;
        int flag = 1;
        while (cur)
        {
            if (flag % 2)
            {
                if (tempOdd)
                {
                    tempOdd->next = cur;
                }
                tempOdd = cur;
            }
            else
            {
                if (tempEven)
                {
                    tempEven->next = cur;
                }
                else
                {
                    mid = cur;
                }
                tempEven = cur;
            }
            cur = cur->next;
            flag = flag % 2 + 1;
        }
        if (tempOdd)
            tempOdd->next = mid;
        if (tempEven)
            tempEven->next = NULL;
        return head;
    }
};
